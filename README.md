# DSA Journey 2026

Welcome to my **DSA Journey 2026** repository. This repository documents my structured journey mastering Data Structures & Algorithms using **C++**, centered around solving the curated **120 NeetCode problems** with clean implementations, time/space complexity analysis, and pattern recognition.

---

## 📌 Quick Overview

- 🎯 **Goal:** Complete 120 NeetCode problems
- 💻 **Language:** C++ (C++17 / C++20)
- 📊 **Current Progress:** 9 / 120 Problems Completed (7.5%)
- 🧩 **Foundations:** 11 Pattern Printing Problems Completed (100%)
- 📈 **Detailed Tracker:** [`progress.md`](file:///home/kross/DSA-Journey-2026/progress.md)

---

## 📊 Progress

**9 / 120 Problems Completed**

`██░░░░░░░░░░░░░░░░░░` 7.5%

- **Completed Problems:** 9
- **Remaining Problems:** 111
- **Completion Rate:** 7.5%
- **Current Active Topic:** Arrays, Two Pointers & Hashing

### 📋 Topic-wise Progress

| Topic | Solved | Target | Progress | Status |
|:---|:---:|:---:|:---:|:---:|
| Arrays | 9 | 20 | 45.0% | 🔄 In Progress |
| Two Pointers | 0* | 10 | 0.0% | ⏳ Up Next |
| Sliding Window | 0* | 8 | 0.0% | ⏳ Upcoming |
| Stack | 0 | 8 | 0.0% | ⏳ Upcoming |
| Binary Search | 0 | 10 | 0.0% | ⏳ Upcoming |
| Linked List | 0 | 10 | 0.0% | ⏳ Upcoming |
| Trees & BST | 0 | 14 | 0.0% | ⏳ Upcoming |
| Heap / Priority Queue | 0 | 6 | 0.0% | ⏳ Upcoming |
| Backtracking | 0 | 8 | 0.0% | ⏳ Upcoming |
| Graphs | 0 | 12 | 0.0% | ⏳ Upcoming |
| Dynamic Programming | 0 | 14 | 0.0% | ⏳ Upcoming |
| **Total** | **9** | **120** | **7.5%** | 🚀 Active |

*\*Note: Two Pointers solutions (`pair_sum_optimal.cpp`, `11_most_water_optimal_approach.cpp`) and Sliding Window solutions (`121_buy_sell_stock.cpp`) are currently housed inside the `Arrays/` folder.*

### 🧱 Foundational Modules (Pre-NeetCode)

| Module | Solved | Target | Progress | Status |
|:---|:---:|:---:|:---:|:---:|
| Pattern Printing (Logic Building) | 11 | 11 | 100% | ✅ Completed |
| C++ STL Basics & Vectors | 2 | 2 | 100% | ✅ Completed |

---

## 📚 Topics Covered

### 1. Arrays & Hashing
- **Contains Duplicate (LC 217):** Implemented both brute-force pair comparison ($O(n^2)$) and optimal hash set lookup ($O(n)$) using `std::unordered_set`.
- **Single Number (LC 136):** Frequency inspection and uniqueness checking.
- **Maximum Subarray (LC 53):** Compared $O(n^2)$ contiguous subarray summation against $O(n)$ Kadane's Algorithm.
- **Pair Sum / Two Sum II (LC 1 / LC 167):** Compared $O(n^2)$ brute-force against $O(n)$ Two Pointers technique on sorted arrays.
- **Majority Element (LC 169):** Implemented nested frequency counting ($O(n^2)$) and optimal Boyer-Moore Voting Algorithm ($O(n)$ time, $O(1)$ space).
- **Best Time to Buy and Sell Stock (LC 121):** Single-pass minimum tracking for optimal profit determination.
- **Container With Most Water (LC 11):** Implemented both $O(n^2)$ brute force and optimal $O(n)$ Two-Pointer boundary convergence.
- **Product of Array Except Self (LC 238):** Solved with nested exclusion multiplication ($O(n^2)$).

### 2. Math & Geometry
- **Pow(x, n) (LC 50):** Binary Exponentiation calculating logarithmic power $O(\log n)$ using bitwise odd/even checks and repeated squaring.

### 3. Logic Building & Pattern Printing
- Solved 11 classic star and number patterns in `patterns/` (triangles, inverted triangles, centered pyramids, hollow diamonds, and butterfly wings) to build strong intuition for nested iteration and coordinate systems.

---

## 🧠 Patterns Learned

Based directly on source code implementations in this repository:

| Pattern | Description | Verified Implementation |
|:---|:---|:---|
| **Two Pointers** | Converging left and right indices on sorted / bounded sequences | [`Arrays/pair_sum_optimal.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/pair_sum_optimal.cpp), [`Arrays/11_most_water_optimal_approach.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/11_most_water_optimal_approach.cpp) |
| **Kadane's Algorithm** | Continuous subarray maximum sum tracking with dynamic resets | [`Arrays/53_kadanes_algo.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/53_kadanes_algo.cpp) |
| **Boyer-Moore Voting** | Linear time, $O(1)$ auxiliary space majority element selection | [`Arrays/169_majority_element_moore.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/169_majority_element_moore.cpp) |
| **Hashing (Hash Set)** | Constant time average lookup with `std::unordered_set` | [`Arrays/217_duplicate_number_optimized.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/217_duplicate_number_optimized.cpp) |
| **Single-Pass Greedy** | Maintaining running min/max state across one iteration | [`Arrays/121_buy_sell_stock.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/121_buy_sell_stock.cpp) |
| **Binary Exponentiation** | Divide & conquer power computation in logarithmic $O(\log n)$ time | [`Arrays/50_pow.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/50_pow.cpp) |
| **Nested Loop Geometry** | Star/number matrices, boundary constraints, and symmetries | [`patterns/*.cpp`](file:///home/kross/DSA-Journey-2026/patterns/) |

---

## 📁 Repository Structure

```text
DSA-Journey-2026/
├── Arrays/
│   ├── 11_most_water_container_problem.cpp         # LeetCode 11: Container With Most Water (Brute force O(n^2))
│   ├── 11_most_water_optimal_approach.cpp          # LeetCode 11: Container With Most Water (Two Pointers O(n))
│   ├── 121_buy_sell_stock.cpp                      # LeetCode 121: Best Time to Buy and Sell Stock (O(n))
│   ├── 136_Single_number.cpp                       # LeetCode 136: Single Number (Linear scan)
│   ├── 136_Single_number_optimized.cpp             # LeetCode 136: Single Number (Optimized check)
│   ├── 169_majority_element_brute.cpp              # LeetCode 169: Majority Element (Brute force O(n^2))
│   ├── 169_majority_element_moore.cpp              # LeetCode 169: Majority Element (Moore's Voting O(n))
│   ├── 217_Duplicate_number.cpp                    # LeetCode 217: Contains Duplicate (Brute force O(n^2))
│   ├── 217_duplicate_number_optimized.cpp          # LeetCode 217: Contains Duplicate (unordered_set O(n))
│   ├── 238_array_multiplication_except_self.cpp    # LeetCode 238: Product of Array Except Self (Brute force O(n^2))
│   ├── 50_pow.cpp                                  # LeetCode 50: Pow(x, n) (Binary Exponentiation O(log n))
│   ├── 53_kadanes_algo.cpp                         # LeetCode 53: Maximum Subarray (Kadane's Algorithm O(n))
│   ├── 53_WAP_for_max_subarray_using_brueforce.cpp # LeetCode 53: Maximum Subarray (Brute force O(n^2))
│   ├── pair_sum_brute.cpp                          # LeetCode 1 / 167: Pair Sum (Brute force O(n^2))
│   ├── pair_sum_optimal.cpp                        # LeetCode 1 / 167: Pair Sum (Two Pointers O(n))
│   ├── printing_all_subarray.cpp                   # Subarray Concept: All contiguous subarrays demo
│   └── Vector.cpp                                  # C++ STL: std::vector fundamentals demo
├── Notes/
│   └── Basic_Cpp.html                              # Interactive quick revision guide on C++ fundamentals
├── patterns/
│   ├── butterfly-pattern.cpp                       # Symmetrical butterfly star pattern
│   ├── hollow-diamond.cpp                          # Hollow diamond pattern with boundary checks
│   ├── Little-diffrent-square-pattern.cpp          # Consecutive numbers square pattern
│   ├── Pyramind-pattern1.cpp                       # Centered number pyramid pattern
│   ├── square-pattern.cpp                          # Uniform grid number square pattern
│   ├── Triangle-pattern1.cpp                       # Star right triangle pattern
│   ├── Triangle-pattern2.cpp                       # Row-number right triangle pattern
│   ├── triangle-pattern3.cpp                       # Col-number right triangle pattern
│   ├── triangle-pattern.4.cpp                      # Inverted number triangle pattern
│   ├── triangle-pattern5.cpp                       # Floyd's triangle pattern
│   └── triangle-pattern6.cpp                       # Inverted and shifted triangle pattern
├── progress.md                                     # Problem-by-problem tracker & roadmap status
└── README.md                                       # Repository overview & dashboard
```

---

## 🚀 Learning Approach

1. **Brute Force First:** Always start by writing the intuitive, naive solution ($O(n^2)$ or $O(n^3)$) to prove correctness and understand the problem mechanics.
2. **Pattern-Driven Optimization:** Identify repetitive work, redundant traversals, or search bottlenecks. Apply established DSA patterns (Two Pointers, Hashing, Kadane's, Binary Exponentiation) to minimize time and space complexities.
3. **Compare & Contrast:** Keep both brute-force and optimized files side-by-side to visibly trace the evolution of each solution.
4. **Firm Foundations:** Preceded algorithmic problem solving with pattern printing logic and modern C++ STL container fundamentals.

---

## 📈 Progress Tracker

For detailed problem listings, direct source file links, complexity breakdowns, and upcoming topic milestones, check out the dedicated progress file:

👉 [**Open progress.md**](file:///home/kross/DSA-Journey-2026/progress.md)