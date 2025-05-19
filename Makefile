all: market_sim

market_sim: main.cpp order_book.cpp utils.cpp
	g++ -std=c++17 -pthread main.cpp order_book.cpp utils.cpp -o market_sim

clean:
	rm -f market_sim