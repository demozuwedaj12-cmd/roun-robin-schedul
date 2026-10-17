# ⚙️ Round Robin CPU Scheduling Simulator

> A clean, efficient, and interactive C++ implementation of the **Round Robin CPU Scheduling Algorithm**, developed as part of academic coursework at Mekdela Amba University.

<div align="center">

[![C++](https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![OS](https://img.shields.io/badge/Domain-Operating%20Systems-orange?style=for-the-badge&logo=linux&logoColor=white)](https://en.wikipedia.org/wiki/Operating_system)
[![License](https://img.shields.io/badge/License-Academic-lightgrey?style=for-the-badge)](LICENSE)

</div>

---

## 📖 About The Project

In modern operating systems, CPU scheduling is vital for multitasking and resource allocation. **Round Robin (RR)** is one of the most popular preemptive scheduling algorithms designed especially for time-sharing systems. 

This program simulates the Round Robin scheduling mechanism by taking process burst times and a fixed time quantum as inputs, processing them using a queue data structure, and dynamically generating performance metrics including:
* 📊 **Gantt Chart Execution Flow**
* ⏱️ **Completion Time, Turnaround Time, and Waiting Time** for each process
* 📈 **Average Turnaround and Waiting Times**

---

## ✨ Features

* **Dynamic Input Handling:** Allows users to input the number of processes, individual burst times, and the desired time quantum.
* **Queue-Based Simulation:** Uses standard template libraries (`std::queue`, `std::vector`) to accurately replicate process context switching and time slices.
* **Formatted Console Output:** Displays a clear step-by-step Gantt chart visualization followed by a detailed performance metrics table.
* **Precision Metrics:** Computes average waiting and turnaround times rounded to two decimal places.

---

## 🛠️ Technology Stack & Concepts

* **Programming Language:** C++
* **Standard Libraries:** `<iostream>`, `<vector>`, `<queue>`, `<iomanip>`, `<algorithm>`
* **Core Concepts:** Operating Systems, Process Management, CPU Scheduling Algorithms, Queue Data Structure

---

## 🚀 Getting Started & Compilation

Follow these steps to run the simulator locally on your machine:

### 1. Clone the Repository
```bash
git clone [https://github.com/demozuwedaj12-cmd/roun-robin-schedul.git](https://github.com/demozuwedaj12-cmd/roun-robin-schedul.git)
2. Compile the Code
Open your terminal or C++ IDE (like VS Code, Code::Blocks, or Dev-C++) and compile main.cpp:
g++ main.cpp -o scheduler
3. Run the Application
Execute the compiled binary:
On Windows:.\scheduler.exe
On Linux / macOS:./scheduler
💡 Example Usage
Enter number of processes: 3
Enter time quantum (in ms): 4
Enter burst time for process P1: 10
Enter burst time for process P2: 5
Enter burst time for process P3: 8

Gantt Chart: | P1 (4 ms) | P2 (4 ms) | P3 (4 ms) | P1 (4 ms) | P2 (1 ms) | P3 (4 ms) | P1 (2 ms) |

Process     Burst Time      Completion Time     Turnaround Time     Waiting Time
P1          10              22                  22                  12
P2          5               9                   9                   4
P3          8               21                  21                  13

Average Turnaround Time: 17.33 ms
Average Waiting Time: 9.67 ms
👨‍💻 Author & Maintainer
Name: Demozu Wedaj
Institution: Mekdela Amba University (Software Engineering)
GitHub: @demozuwedaj12-cmd
