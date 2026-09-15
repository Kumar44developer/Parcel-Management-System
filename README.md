# 📦 Parcel Management System

A console-based parcel inventory and storage simulation written in C. The application models warehouse parcel dispatch workflows using a dynamic Last-In, First-Out (LIFO) stack data structure with boundary checks and manual memory management.

---

## Overview

In logistics and warehousing environments, stacked parcels are typically processed in reverse order of storage (the most recently loaded parcel is the first unloaded). This system replicates that model through dynamic array-based stack operations, complete with overflow/underflow handling and an interactive terminal menu.

---

## Features

- **Dynamic Memory Allocation**: Prompts the user for storage capacity at startup and allocates memory dynamically using `malloc()`.
- **Add Parcel (Push)**: Stores a numeric parcel ID onto the stack with automatic overflow detection.
- **Remove Parcel (Pop)**: Dispatches the topmost parcel from storage with underflow validation.
- **Display Inventory**: Traverses and lists all active parcel IDs from top to bottom (dispatch order).
- **Safe Memory Deallocation**: Frees allocated memory upon exit to prevent memory leaks.
- **Interactive Menu**: Clean terminal interface with continuous loop operation and input handling.

---

## Tech Stack

| Component | Specification |
| --- | --- |
| Language | C (C99 standard or higher) |
| Data Structure | Dynamic Stack (LIFO) |
| Memory Management | `malloc()` and `free()` from `<stdlib.h>` |
| Interface | Command Line Interface (CLI) |

---

## Project Structure

```
Parcel-Management-System/
├── Parcelsystem.c   
└── README.md        
```

---

## Getting Started

### Prerequisites

You need a C compiler such as GCC, Clang, or MSVC installed on your system.

To check if GCC is installed:

```bash
gcc --version
```

### Installation

Clone the repository to your local machine:

```bash
git clone https://github.com/Kumar44developer/Parcel-Management-System.git
```

### Compile & Run

1. Navigate into the project folder:

   ```bash
   cd Parcel-Management-System
   ```

2. Compile the source code using GCC:

   ```bash
   gcc Parcelsystem.c -o Parcelsystem
   ```

3. Run the compiled executable:

   - **On Windows:**

     ```bash
     Parcelsystem.exe
     ```

   - **On Linux / macOS:**

     ```bash
     ./Parcelsystem
     ```

---

## Sample Execution

```text
Enter number of parcels: 3

--- Parcel Storage System ---
1. Add Parcel (Push)
2. Remove Parcel (Pop)
3. Display Parcels
4. Exit
Enter your choice: 1
Enter Parcel ID to add: 101
Parcel ID 101 added successfully.

--- Parcel Storage System ---
1. Add Parcel (Push)
2. Remove Parcel (Pop)
3. Display Parcels
4. Exit
Enter your choice: 1
Enter Parcel ID to add: 102
Parcel ID 102 added successfully.

--- Parcel Storage System ---
1. Add Parcel (Push)
2. Remove Parcel (Pop)
3. Display Parcels
4. Exit
Enter your choice: 3

Parcels currently in storage:
Parcel ID: 102
Parcel ID: 101

--- Parcel Storage System ---
1. Add Parcel (Push)
2. Remove Parcel (Pop)
3. Display Parcels
4. Exit
Enter your choice: 2
Parcel ID 102 removed from storage.

--- Parcel Storage System ---
1. Add Parcel (Push)
2. Remove Parcel (Pop)
3. Display Parcels
4. Exit
Enter your choice: 4
Exiting program...
```

---

## Author

**Kumar44developer** — [GitHub Profile](https://github.com/Kumar44developer)
