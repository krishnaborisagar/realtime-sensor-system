# ⚡ Real-Time Sensor Processing System (C++)

## 📌 Overview

This project simulates a **real-time embedded system** using C++.
It models periodic task execution similar to an RTOS and processes simulated sensor data with alert handling.

---

## 🎯 Key Features

* RTOS-inspired task scheduler
* Periodic task execution
* Sensor data simulation
* Threshold-based alert system
* Modular architecture

---

## 🧠 Technical Concepts Demonstrated

* Real-time system design (simulation)
* Task scheduling
* Inter-module communication
* Deterministic execution patterns
* Embedded system architecture principles

---

## 🏗️ Architecture

```
Scheduler
 ├── Sensor Task (reads data)
 ├── Alert Task (checks threshold)
 ↓
Data Processing
 ↓
Console Output
```

---

## ⚙️ Build Instructions

```bash
mkdir build
cd build
cmake ..
make
```

---

## ▶️ Run

```bash
./sensor
```

---

## 📂 Project Structure

```
src/
 ├── main.cpp
 ├── scheduler.cpp
 ├── sensor.cpp
 ├── alert.cpp

include/
 ├── scheduler.h
 ├── sensor.h
 ├── alert.h
```

---

## ⚠️ Limitations

* Simulated RTOS (not real FreeRTOS/QNX)
* No hardware integration
* Basic scheduler (non-preemptive)

---

## 🚀 Future Improvements

* Port to FreeRTOS or embedded Linux
* Add hardware sensor integration (Raspberry Pi)
* Implement priority-based scheduling
* Add logging and diagnostics

---
