# 💡 Data Structures & Algorithms Practice (Modern C++17)

**High-Performance Solutions to Core Coding Interview Problems, Striver SDE Sheet, Kaabil Sheet & Algorithmic Patterns**

[![Language: C++17](https://img.shields.io/badge/Language-Modern_C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Curriculum](https://img.shields.io/badge/Curriculum-Striver_SDE_Sheet-FF6F00?style=for-the-badge)](https://takeuforward.org/)
[![Problems](https://img.shields.io/badge/Solved-50%2B_Problems-4CAF50?style=for-the-badge)](https://leetcode.com/)

---

## 📌 Repository Purpose

This repository houses clean, optimized **C++17** solutions and handwritten revision notes for fundamental Data Structures and Algorithms (DSA) problems. 

The focus of this repository is on writing clean, idiomatic C++ with optimal time ($O$) and space complexities, leveraging the C++ Standard Template Library (`STL`), and mastering recurring algorithmic patterns essential for top-tier software engineering interviews.

---

## 🗂️ Problem Categorization & Topic Index

```
dsa-practice/
├── SdeSheetChallenge/         # Striver SDE Sheet Top Interview Problems
│   ├── setmatrixzero.cpp      # In-place row/col state marking (O(1) space)
│   ├── Pascaltriangle.cpp     # Combinatorics & row generation
│   ├── nextpermutation.cpp    # Lexicographical pivot swap algorithm
│   ├── kadanealgo.cpp         # Maximum subarray sum (O(N) time)
│   ├── rotateimage.cpp        # Matrix transpose + reverse (In-place O(1))
│   ├── majorityelement.cpp    # Moore's Voting Algorithm (O(N) time, O(1) space)
│   ├── pow(x,n).cpp           # Binary Exponentiation (O(log N))
│   └── DSA NOTES/             # OneNote digital revision notebooks
├── patterns/                  # 18 Pattern Printing Algorithms (Loops & Matrix Logic)
│   ├── p1.cpp to p18.cpp      # Star pyramids, number crowns, inverted triangles
├── basics/                    # Core C++ Idioms & Fundamentals
│   ├── arraysbasic.cpp        # Array indexing, bounds checking, traversal
│   ├── 2darray.cpp            # Row-major order & 2D transformations
│   ├── char.cpp               # C-strings vs std::string
│   ├── forloops.cpp           # Iterators vs range-based loops
│   └── func2.cpp              # Pass-by-reference & memory pointers
├── stl/                       # C++ Standard Template Library Deep Dive
│   └── 1.cpp                  # Vectors, sets, maps, priority queues, and iterators
└── Kaabil Sheet - DSA.pdf     # Beginner-friendly curriculum guide
```

---

## 📝 Problem Solutions Matrix

| Problem | Category | Approach / Technique | Time | Space | Solution Link |
|---|---|---|:---:|:---:|---|
| **Set Matrix Zeroes** | Matrix | First row/col marker flags | $O(M \times N)$ | $O(1)$ | [`setmatrixzero.cpp`](SdeSheetChallenge/setmatrixzero.cpp) |
| **Pascal's Triangle** | Dynamic Array | Row-by-row combination formula | $O(N^2)$ | $O(1)$ | [`Pascaltriangle.cpp`](SdeSheetChallenge/Pascaltriangle.cpp) |
| **Next Permutation** | Arrays | Find dip $\to$ find swap $\to$ reverse suffix | $O(N)$ | $O(1)$ | [`nextpermutation.cpp`](SdeSheetChallenge/nextpermutation.cpp) |
| **Kadane's Algorithm** | Dynamic Programming | Continuous running max reset at negative | $O(N)$ | $O(1)$ | [`kadanealgo.cpp`](SdeSheetChallenge/kadanealgo.cpp) |
| **Rotate Image (90°)** | Matrix | Transpose followed by row reversal | $O(N^2)$ | $O(1)$ | [`rotateimage.cpp`](SdeSheetChallenge/rotateimage.cpp) |
| **Majority Element (>N/2)**| Array | Boyer-Moore Voting Algorithm | $O(N)$ | $O(1)$ | [`majorityelement.cpp`](SdeSheetChallenge/majorityelement.cpp) |
| **Pow(x, n)** | Divide & Conquer | Fast Modular Exponentiation | $O(\log N)$ | $O(1)$ | [`pow(x,n).cpp`](SdeSheetChallenge/pow(x,n).cpp) |

---

## 📓 OneNote Digital Revision Notes
Included inside `SdeSheetChallenge/DSA NOTES/` are synchronized `.one` revision pages containing dry runs, edge-case analysis, and intuition diagrams for:
- Kadane's Algorithm
- Merge Intervals without extra space
- Next Permutation step-by-step pivots
- Rotate Image in-place coordinate mappings

---

## 🚀 How to Compile & Run

All solutions are written in standard C++17. Use any standard C++ compiler (`g++`, `clang++`, or MSVC):

```bash
# Clone the repository
git clone https://github.com/anshere0/dsa-practice.git
cd dsa-practice

# Compile any solution with C++17 flags
g++ -std=c++17 -O2 SdeSheetChallenge/kadanealgo.cpp -o solution

# Execute
./solution
```

---

## 👤 Author
**Ansh Arora**  
- GitHub: [@anshere0](https://github.com/anshere0)  
- LinkedIn: [Ansh Arora](https://www.linkedin.com/in/ansh-arora0/)
