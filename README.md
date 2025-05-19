# Low-Latency Market Simulator (C++)

A high-performance, multithreaded market simulator built in C++ to model order book behavior and trade execution delays.

## 🚀 Features

- 🧵 Multithreaded order processing using POSIX threads
- 💾 File I/O from simulated order streams
- 🧠 Custom order matching logic
- 📉 Benchmarking with high-resolution timers
- ⚡ ~4x speedup vs. single-threaded baseline (future optimization)

## 📂 File Structure
├── main.cpp             # Entry point
├── order_book.cpp/h     # OrderBook class
├── utils.cpp/h          # Timer utilities
├── orders_1.txt         # Simulated order stream 1
├── orders_2.txt         # Simulated order stream 2
├── Makefile             # Build system
## 🧪 Usage

```bash
make
./market_sim

## Benchmark Example
Total Buys: 100
Total Sells: 100
Elapsed time: 0.0023 seconds