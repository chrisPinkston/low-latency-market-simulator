#include "order_book.h"
#include <fstream>
#include <sstream>
#include <iostream>

void OrderBook::processOrders(const std::string& filename) {
    std::ifstream infile(filename);
    std::string line;

    while (std::getline(infile, line)) {
        std::istringstream iss(line);
        Order o;
        iss >> o.side >> o.quantity >> o.price;
        matchOrder(o);
    }
}

void OrderBook::matchOrder(const Order& order) {
    std::lock_guard<std::mutex> lock(book_mutex);
    if (order.side == 'B') {
        buys.push_back(order);
    } else {
        sells.push_back(order);
    }
}

void OrderBook::printSummary() {
    std::cout << "Total Buys: " << buys.size() << "\n";
    std::cout << "Total Sells: " << sells.size() << "\n";
}