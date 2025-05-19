#include "order_book.h"
#include "utils.h"

int main() {
    OrderBook ob;

    std::thread t1(&OrderBook::processOrders, &ob, "orders_1.txt");
    std::thread t2(&OrderBook::processOrders, &ob, "orders_2.txt");

    t1.join();
    t2.join();

    ob.printSummary();

    return 0;
}