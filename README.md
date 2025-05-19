# ⚡ Low-Latency Market Simulator (C++)

A high-performance, multithreaded market simulator that models order book behavior and trade execution delays—built with speed and systems-level efficiency in mind.

> Designed to showcase C++ systems programming skills relevant to high-frequency trading, quantitative finance, and performance-critical applications.

---

## 🧠 Key Features

- 🧵 **Multithreaded order processing** using POSIX threads
- 💾 **File I/O** to simulate real-world order streams
- 🧠 **Order book matching engine** for bid/ask handling
- 🧠 **Thread-safe data structures** with mutex locking
- 📉 **Benchmarking** via `chrono` to evaluate latency and speedup
- 🧪 Designed for extension into network sockets or memory pools

---

## 📁 File Structure
low-latency-market-simulator/
├── main.cpp           # Entry point with threading and benchmark logic
├── order_book.h       # OrderBook class definition
├── order_book.cpp     # OrderBook method implementations
├── utils.h            # Timer utility class (optional)
├── utils.cpp          # Timer implementation (optional)
├── orders_1.txt       # Sample buy/sell order stream (input file 1)
├── orders_2.txt       # Sample buy/sell order stream (input file 2)
├── Makefile           # Build instructions
└── README.md          # Project overview and documentation

---

## ⚙️ How to Build and Run

### 🧱 Compile the Project

```bash
make

## Run simulation
./market_sim

Example output:
Total Buys: 3
Total Sells: 2
Elapsed time: 0.000291 seconds
