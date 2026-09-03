# Data Structures II - Elementary Sorting Algorithms

This repository contains solutions for the **Elementary Sorting Algorithms** assignment (Data Structures II - EDII) implemented in clean, readable, and human-crafted C++.

All algorithms adhere strictly to fundamental language primitives:
- **No external sorting libraries or helpers** (e.g., `<algorithm>`, `std::sort`, `std::is_sorted`).
- **Manual Swaps**: Implemented using temporary auxiliary variables (`temp`).
- **Manual Element Shifting**: Performed step-by-step using pure `while` loops.

---

## 📂 Project Structure

| File | Algorithm / Technique | Problem Description |
| :--- | :--- | :--- |
| [`Exer01_IsSorted.cpp`](./Exer01_IsSorted.cpp) | **Linear Scan (Early Return)** | Checks if an array is already sorted in non-decreasing order in $O(N)$. Halts immediately upon finding the first inversion. |
| [`Exer02_InsertionSortStudents.cpp`](./Exer02_InsertionSortStudents.cpp) | **Stable Insertion Sort** | Sorts an array of `Student` structs by `grade` in ascending order while preserving the original relative order for equal grades. |
| [`Exer03_FindMedianInsertionSort.cpp`](./Exer03_FindMedianInsertionSort.cpp) | **Insertion Sort + Median** | Sorts an array of distinct integers using Insertion Sort and extracts the median at index $\lfloor (N - 1) / 2 \rfloor$. |
| [`Exer04_InsertSorted.cpp`](./Exer04_InsertSorted.cpp) | **Sorted Insertion via Shifts** | Inserts a new integer `target` into a previously sorted array of $N$ elements by shifting larger elements to the right ($N + 1$ elements). |
| [`Exer05_TaskSchedulingSelectionSort.cpp`](./Exer05_TaskSchedulingSelectionSort.cpp) | **Selection Sort + Greedy Scheduling** | Sorts task durations via Selection Sort to minimize total completion time and calculates the cumulative completion sum. |

---

## 🚀 How to Build and Run

### Prerequisites
Make sure you have a modern C++ compiler installed:
- **GCC / MinGW** (`g++`) or **Clang** (`clang++`) supporting C++11 or higher.

---

### Step-by-Step Instructions

Open your terminal or PowerShell, navigate to the `src` directory, and run the commands corresponding to the exercise you wish to execute:

#### Exercise 1: `Exer01_IsSorted`
```bash
# Compile
g++ -std=c++11 Exer01_IsSorted.cpp -o Exer01_IsSorted

# Run (Windows)
.\Exer01_IsSorted.exe

# Run (Linux / macOS)
./Exer01_IsSorted
```
**Expected Output:**
```text
SORTED
UNSORTED
```

---

#### Exercise 2: `Exer02_InsertionSortStudents`
```bash
# Compile
g++ -std=c++11 Exer02_InsertionSortStudents.cpp -o Exer02_InsertionSortStudents

# Run (Windows)
.\Exer02_InsertionSortStudents.exe

# Run (Linux / macOS)
./Exer02_InsertionSortStudents
```
**Expected Output:**
```text
104 50
102 60
101 80
103 80

10 75
20 75
30 75
```

---

#### Exercise 3: `Exer03_FindMedianInsertionSort`
```bash
# Compile
g++ -std=c++11 Exer03_FindMedianInsertionSort.cpp -o Exer03_FindMedianInsertionSort

# Run (Windows)
.\Exer03_FindMedianInsertionSort.exe

# Run (Linux / macOS)
./Exer03_FindMedianInsertionSort
```
**Expected Output:**
```text
8
30
```

---

#### Exercise 4: `Exer04_InsertSorted`
```bash
# Compile
g++ -std=c++11 Exer04_InsertSorted.cpp -o Exer04_InsertSorted

# Run (Windows)
.\Exer04_InsertSorted.exe

# Run (Linux / macOS)
./Exer04_InsertSorted
```
**Expected Output:**
```text
10 20 25 30 40 50
5 10 20 30 40
```

---

#### Exercise 5: `Exer05_TaskSchedulingSelectionSort`
```bash
# Compile
g++ -std=c++11 Exer05_TaskSchedulingSelectionSort.cpp -o Exer05_TaskSchedulingSelectionSort

# Run (Windows)
.\Exer05_TaskSchedulingSelectionSort.exe

# Run (Linux / macOS)
./Exer05_TaskSchedulingSelectionSort
```
**Expected Output:**
```text
2 5 8
24

1 2 3 4
20
```

---

## 🧠 Algorithm Breakdown

### 1. `is_sorted` (Early Return)
- **Time Complexity:** $O(N)$ worst case, $O(1)$ best case.
- **Space Complexity:** $O(1)$.
- Iterates through the array and compares each element with its immediate successor (`nums[i] > nums[i + 1]`). Terminates on the first inversion detected.

### 2. Stable `Insertion Sort` for Structs
- **Time Complexity:** $O(N^2)$ worst case, $O(N)$ best case.
- **Space Complexity:** $O(1)$ auxiliary.
- Stability is guaranteed by using a strict comparison (`students[j].grade > chave.grade`). Elements with matching grades are never swapped or shifted past each other.

### 3. Median Calculation via `Insertion Sort`
- **Time Complexity:** $O(N^2)$.
- **Space Complexity:** $O(1)$ auxiliary.
- After arranging the elements in non-decreasing order with in-place shifts, retrieves the median element situated at index $\lfloor (N - 1) / 2 \rfloor$.

### 4. Ordered Insertion (`insert_sorted`)
- **Time Complexity:** $O(N)$ shifts.
- **Space Complexity:** $O(1)$ auxiliary.
- Appends an extra slot to the array and traverses backwards from index $N - 1$, shifting each element greater than `target` one position to the right until the insertion spot is found.

### 5. Task Scheduling via `Selection Sort`
- **Time Complexity:** $O(N^2)$ comparisons, $O(N)$ manual swaps.
- **Space Complexity:** $O(1)$ auxiliary.
- Sorts job lengths in ascending order (Shortest Processing Time first) to minimize total and average waiting times. Accumulates completion times:
$$\text{Total Time} = \sum_{i=0}^{N-1} \left( \sum_{k=0}^{i} \text{durations}[k] \right)$$
