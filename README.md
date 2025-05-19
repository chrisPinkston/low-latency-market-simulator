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
├── main.cpp             # Entry point with threading and benchmark
├── order_book.h/.cpp    # OrderBook class with order matching logic
├── utils.h/.cpp         # Utility functions for timing (optional)
├── orders_1.txt         # Sample buy/sell order stream
├── orders_2.txt         # Another sample order stream
├── Makefile             # Build configuration
├── README.md            # This file

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
