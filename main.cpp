#include "order_book.h"
#include "utils.h"
#include <chrono>
#include <iostream>
#include <thread>

int main() {
    OrderBook ob;

    auto start = std::chrono::high_resolution_clock::now();

    std::thread t1(&OrderBook::processOrders, &ob, "orders_1.txt");
    std::thread t2(&OrderBook::processOrders, &ob, "orders_2.txt");

    t1.join();
    t2.join();

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    ob.printSummary();

    std::cout << "Elapsed time: " << elapsed.count() << " seconds\n";

    return 0;
}