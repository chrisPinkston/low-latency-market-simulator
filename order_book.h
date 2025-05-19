#pragma once
#include <string>
#include <mutex>
#include <vector>

struct Order {
    char side; // 'B' for buy, 'S' for sell
    int quantity;
    double price;
};

class OrderBook {
public:
    void processOrders(const std::string& filename);
    void printSummary();

private:
    std::vector<Order> buys;
    std::vector<Order> sells;
    std::mutex book_mutex;

    void matchOrder(const Order& order);
};