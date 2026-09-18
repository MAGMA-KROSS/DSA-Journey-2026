# DSA Journey 2026

Tracking my progress through 120 curated Data Structures and Algorithms problems in C++ (NeetCode roadmap).

---

## Overall Progress

- **Completed Problems:** 9 / 120
- **Remaining Problems:** 111
- **Completion Percentage:** 7.5%
- **Current Status:** 🔄 Active — Deep dive into Arrays, Two Pointers & Hashing

---

## Topic-wise Progress

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

*\*Note: Two Pointers implementations (`pair_sum_optimal.cpp`, `11_most_water_optimal_approach.cpp`) and Sliding Window concepts (`121_buy_sell_stock.cpp`) are currently organized under the `Arrays/` directory.*

### Foundational Prerequisites (Non-NeetCode Target)

| Module | Solved | Target | Progress | Status |
|:---|:---:|:---:|:---:|:---:|
| Pattern Printing (Logic Building) | 11 | 11 | 100% | ✅ Completed |
| C++ STL Basics & Vectors | 2 | 2 | 100% | ✅ Completed |

---

## Completed Problems

| # | Problem | Topic | File / Path | Pattern / Concept |
|:---:|:---|:---|:---|:---|
| 1 | [Contains Duplicate (LC 217)](https://leetcode.com/problems/contains-duplicate/) | Arrays & Hashing | [`Arrays/217_Duplicate_number.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/217_Duplicate_number.cpp)<br>[`Arrays/217_duplicate_number_optimized.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/217_duplicate_number_optimized.cpp) | Hash Set (`std::unordered_set`) $O(n)$ vs. Brute Force $O(n^2)$ |
| 2 | [Single Number (LC 136)](https://leetcode.com/problems/single-number/) | Arrays / Bit Manipulation | [`Arrays/136_Single_number.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/136_Single_number.cpp)<br>[`Arrays/136_Single_number_optimized.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/136_Single_number_optimized.cpp) | Linear frequency / uniqueness verification |
| 3 | [Maximum Subarray (LC 53)](https://leetcode.com/problems/maximum-subarray/) | Arrays / Dynamic Programming | [`Arrays/53_WAP_for_max_subarray_using_brueforce.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/53_WAP_for_max_subarray_using_brueforce.cpp)<br>[`Arrays/53_kadanes_algo.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/53_kadanes_algo.cpp) | Kadane's Algorithm ($O(n)$ time, $O(1)$ space) vs. Brute Force $O(n^2)$ |
| 4 | [Pair Sum / Two Sum II (LC 1 / LC 167)](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | Arrays / Two Pointers | [`Arrays/pair_sum_brute.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/pair_sum_brute.cpp)<br>[`Arrays/pair_sum_optimal.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/pair_sum_optimal.cpp) | Two Pointers on sorted array ($O(n)$ time) vs. Nested loop brute force $O(n^2)$ |
| 5 | [Majority Element (LC 169)](https://leetcode.com/problems/majority-element/) | Arrays | [`Arrays/169_majority_element_brute.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/169_majority_element_brute.cpp)<br>[`Arrays/169_majority_element_moore.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/169_majority_element_moore.cpp) | Boyer-Moore Voting Algorithm ($O(n)$ time, $O(1)$ space) |
| 6 | [Pow(x, n) (LC 50)](https://leetcode.com/problems/powx-n/) | Math & Geometry / Arrays | [`Arrays/50_pow.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/50_pow.cpp) | Binary Exponentiation (Logarithmic time $O(\log n)$) |
| 7 | [Best Time to Buy and Sell Stock (LC 121)](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Arrays / Sliding Window | [`Arrays/121_buy_sell_stock.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/121_buy_sell_stock.cpp) | Single-pass Greedy / Minimum tracking ($O(n)$ time, $O(1)$ space) |
| 8 | [Container With Most Water (LC 11)](https://leetcode.com/problems/container-with-most-water/) | Arrays / Two Pointers | [`Arrays/11_most_water_container_problem.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/11_most_water_container_problem.cpp)<br>[`Arrays/11_most_water_optimal_approach.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/11_most_water_optimal_approach.cpp) | Two Pointers inward convergence ($O(n)$ time, $O(1)$ space) vs. Brute Force $O(n^2)$ |
| 9 | [Product of Array Except Self (LC 238)](https://leetcode.com/problems/product-of-array-except-self/) | Arrays & Hashing | [`Arrays/238_array_multiplication_except_self.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/238_array_multiplication_except_self.cpp) | Exclusion multiplication ($O(n^2)$ Brute Force; target: Prefix & Suffix products $O(n)$) |

### Supporting Concept Implementations

| # | Concept / Topic | File / Path | Description |
|:---:|:---|:---|:---|
| 1 | Continuous Subarrays | [`Arrays/printing_all_subarray.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/printing_all_subarray.cpp) | Demonstration generating all contiguous subarrays using 3 nested loops ($O(n^3)$) |
| 2 | C++ STL Vectors | [`Arrays/Vector.cpp`](file:///home/kross/DSA-Journey-2026/Arrays/Vector.cpp) | Vector operations: dynamic sizing, initialization, `push_back`, `front`, `back` |
| 3 | C++ Quick Reference Notes | [`Notes/Basic_Cpp.html`](file:///home/kross/DSA-Journey-2026/Notes/Basic_Cpp.html) | Revision guide on C++ fundamentals, syntax, and time complexity basics |

### Foundational Pattern Problems (`patterns/`)

| # | Pattern Problem | File / Path | Concept |
|:---:|:---|:---|:---|
| 1 | Square Pattern | [`patterns/square-pattern.cpp`](file:///home/kross/DSA-Journey-2026/patterns/square-pattern.cpp) | 2D nested loops, uniform row/col index printing |
| 2 | Incremental Square | [`patterns/Little-diffrent-square-pattern.cpp`](file:///home/kross/DSA-Journey-2026/patterns/Little-diffrent-square-pattern.cpp) | 2D nested loops with continuously running counter |
| 3 | Right Triangle (Star) | [`patterns/Triangle-pattern1.cpp`](file:///home/kross/DSA-Journey-2026/patterns/Triangle-pattern1.cpp) | Row-dependent inner loop condition |
| 4 | Right Triangle (Row Number) | [`patterns/Triangle-pattern2.cpp`](file:///home/kross/DSA-Journey-2026/patterns/Triangle-pattern2.cpp) | Row number replication |
| 5 | Right Triangle (Col Number) | [`patterns/triangle-pattern3.cpp`](file:///home/kross/DSA-Journey-2026/patterns/triangle-pattern3.cpp) | Column number indexing per line |
| 6 | Inverted Right Triangle | [`patterns/triangle-pattern.4.cpp`](file:///home/kross/DSA-Journey-2026/patterns/triangle-pattern.4.cpp) | Decrementing counter loop |
| 7 | Floyd's Triangle | [`patterns/triangle-pattern5.cpp`](file:///home/kross/DSA-Journey-2026/patterns/triangle-pattern5.cpp) | Sequential integer generation across triangular rows |
| 8 | Inverted & Shifted Triangle | [`patterns/triangle-pattern6.cpp`](file:///home/kross/DSA-Journey-2026/patterns/triangle-pattern6.cpp) | Leading spaces offset with descending width |
| 9 | Full Pyramid Pattern | [`patterns/Pyramind-pattern1.cpp`](file:///home/kross/DSA-Journey-2026/patterns/Pyramind-pattern1.cpp) | Centered pyramid with ascending and descending numbers |
| 10 | Hollow Diamond Pattern | [`patterns/hollow-diamond.cpp`](file:///home/kross/DSA-Journey-2026/patterns/hollow-diamond.cpp) | Boundary condition checks inside symmetrical space loops |
| 11 | Butterfly Pattern | [`patterns/butterfly-pattern.cpp`](file:///home/kross/DSA-Journey-2026/patterns/butterfly-pattern.cpp) | Symmetric dual-wing star printing with dynamic internal spacing |

---

## Patterns Learned

Evidence based strictly on the repository source code:

- [x] **Two Pointers (Sorted & Bounded Convergence):**
  - Implemented in `Arrays/pair_sum_optimal.cpp` converging toward a target sum in $O(n)$ time.
  - Implemented in `Arrays/11_most_water_optimal_approach.cpp` converging inward by discarding the shorter container wall in $O(n)$ time and $O(1)$ space.
- [x] **Kadane's Algorithm:** Implemented in `Arrays/53_kadanes_algo.cpp` to find the maximum subarray sum by resetting `currSum = 0` whenever it drops below zero ($O(n)$ time, $O(1)$ space).
- [x] **Boyer-Moore Voting Algorithm:** Implemented in `Arrays/169_majority_element_moore.cpp` tracking candidate and frequency cancellations to find the majority element in $O(n)$ time and $O(1)$ auxiliary space.
- [x] **Hashing with Hash Sets (`std::unordered_set`):** Implemented in `Arrays/217_duplicate_number_optimized.cpp` for $O(1)$ average duplicate lookups.
- [x] **Single-Pass Greedy Tracking:** Implemented in `Arrays/121_buy_sell_stock.cpp` maintaining the minimum purchase price so far to calculate maximum potential profit.
- [x] **Binary Exponentiation:** Implemented in `Arrays/50_pow.cpp` computing $x^n$ by checking binary bits of $n$ and repeatedly squaring $x$ in $O(\log n)$ operations.
- [x] **Nested Iteration & Matrix Symmetry:** Mastered across all 11 pattern printing exercises in `patterns/` and contiguous subarray generation in `Arrays/printing_all_subarray.cpp`.

### Patterns Not Yet In Repository (Upcoming)

- [ ] Prefix Sum & Suffix Product ($O(n)$ time, $O(1)$ auxiliary space)
- [ ] Sliding Window (Dynamic / Variable Size)
- [ ] Binary Search (Standard & Rotated Sorted Arrays)
- [ ] Monotonic Stack
- [ ] Fast & Slow Pointers (Linked List cycles)
- [ ] Tree Traversals (DFS / BFS)
- [ ] Backtracking & Pruning
- [ ] 1-D and 2-D Dynamic Programming

---

## Recent Progress

- **Foundational Logic Completed:** Solved all 11 pattern problems in `patterns/`, covering coordinate geometry, hollow shapes, and pyramid symmetries.
- **C++ STL Vector Exploration:** Set up vector fundamentals in `Arrays/Vector.cpp` and compiled comprehensive notes in `Notes/Basic_Cpp.html`.
- **Arrays & Algorithmic Problem Solving:**
  - Implemented both brute-force and optimized solutions for LeetCode 136 (Single Number) and LeetCode 217 (Contains Duplicate).
  - Contrasted $O(n^2)$ subarray sum enumeration with $O(n)$ Kadane's Algorithm for LeetCode 53.
  - Implemented Pair Sum (Two Sum II) comparing $O(n^2)$ nested loops against $O(n)$ Two Pointers on sorted arrays.
  - Solved Majority Element (LeetCode 169) using both brute force counting and Boyer-Moore Voting Algorithm.
- **Latest Problem Additions (September 18, 2026):**
  - LeetCode 50: Pow(x, n) solved with $O(\log n)$ Binary Exponentiation.
  - LeetCode 121: Best Time to Buy and Sell Stock solved with single-pass greedy minimum tracking.
  - LeetCode 11: Container With Most Water completed with both $O(n^2)$ brute-force and optimal $O(n)$ Two-Pointer approach.
  - LeetCode 238: Product of Array Except Self added with brute-force nested exclusion product.

---

## Next Focus

1. **Optimize LeetCode 238 (Product of Array Except Self):** Transition from the current $O(n^2)$ brute-force implementation to the optimal $O(n)$ time, $O(1)$ auxiliary space Prefix and Suffix product approach.
2. **Optimize LeetCode 136 (Single Number):** Implement the optimal $O(n)$ time and $O(1)$ space bitwise XOR solution (`a ^ a = 0`).
3. **Complete Essential Arrays & Hashing (NeetCode):**
   - [Two Sum (LC 1)](https://leetcode.com/problems/two-sum/) using `std::unordered_map` for unsorted arrays ($O(n)$ time).
   - [Valid Anagram (LC 242)](https://leetcode.com/problems/valid-anagram/) using frequency arrays / hash maps.
   - [Group Anagrams (LC 49)](https://leetcode.com/problems/group-anagrams/) using sorted strings as hash map keys.
   - [Longest Consecutive Sequence (LC 128)](https://leetcode.com/problems/longest-consecutive-sequence/) utilizing hash set sequence starts.
4. **Advance to Dedicated Topic Folders:**
   - Formalize `Two-Pointers/` folder with 3Sum (LC 15) and Valid Palindrome (LC 125).
   - Formalize `Sliding-Window/` folder with Longest Substring Without Repeating Characters (LC 3).
   - Introduce `Stack/` with Valid Parentheses (LC 20) and Min Stack (LC 155).
