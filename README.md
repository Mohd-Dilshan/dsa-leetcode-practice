# dsa-leetcode-practice
LeetCode problem solutions organized by topic such as arrays, strings, trees, graphs, dynamic programming, and more.
# DSA LeetCode Practice

This repository contains my solutions to various **LeetCode problems** implemented in **C++**.
The goal of this repository is to improve my **problem-solving skills**, strengthen my understanding of **Data Structures and Algorithms**, and prepare for **technical interviews**.

---

## 📌 Language

* C++
* Java
---

## 📂 Folder Structure

Problems are organized by topic:

```
dsa-leetcode-practice
│
├── arrays
├── strings
├── linked-list
├── stack
├── queue
├── trees
├── graphs
├── dynamic-programming
└── miscellaneous
```

Each folder contains solutions to problems related to that topic.

---

## 🎯 Goals

* Solve LeetCode problems consistently
* Improve algorithmic thinking
* Learn optimized approaches
* Prepare for coding interviews

---

## 🚀 Topics Covered

* Arrays
* Strings
* Linked Lists
* Stacks & Queues
* Trees
* Graphs
* Recursion
* Dynamic Programming
* Greedy Algorithms
* Sliding Window
* Binary Search

---

## 📖 Problem Format

Each solution file typically contains:

* Problem name
* Problem link
* Approach used
* Time Complexity
* Space Complexity
* C++ implementation

---

## 💡 Example

```cpp
// Problem: Two Sum
// Link:

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            
            if(mp.count(complement)){
                return {mp[complement], i};
            }
            
            mp[nums[i]] = i;
        }
        
        return {};
    }
};
```

---

## ⭐ Progress

I will keep updating this repository as I solve more problems.

---

## 📚 Platform

Problems are taken from **LeetCode**.

---

## 🔗 Author
**Mohd Dilshan**

Maintained by me as part of my **DSA learning journey**.

<!---LeetCode Topics Start-->
# LeetCode Topics
## Math
|  |
| ------- |
| [0089-gray-code](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0089-gray-code) |
| [0231-power-of-two](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0231-power-of-two) |
| [0258-add-digits](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0258-add-digits) |
| [0326-power-of-three](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0326-power-of-three) |
| [0342-power-of-four](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0342-power-of-four) |
| [0367-valid-perfect-square](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0367-valid-perfect-square) |
| [1281-subtract-the-product-and-sum-of-digits-of-an-integer](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/1281-subtract-the-product-and-sum-of-digits-of-an-integer) |
| [1432-max-difference-you-can-get-from-changing-an-integer](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/1432-max-difference-you-can-get-from-changing-an-integer) |
| [2235-add-two-integers](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2235-add-two-integers) |
| [2843-count-symmetric-integers](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2843-count-symmetric-integers) |
| [3875-construct-uniform-parity-array-i](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/3875-construct-uniform-parity-array-i) |
## Bit Manipulation
|  |
| ------- |
| [0089-gray-code](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0089-gray-code) |
| [0136-single-number](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0136-single-number) |
| [0231-power-of-two](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0231-power-of-two) |
| [0342-power-of-four](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0342-power-of-four) |
| [0389-find-the-difference](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0389-find-the-difference) |
## Recursion
|  |
| ------- |
| [0021-merge-two-sorted-lists](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0021-merge-two-sorted-lists) |
| [0206-reverse-linked-list](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0206-reverse-linked-list) |
| [0231-power-of-two](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0231-power-of-two) |
| [0326-power-of-three](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0326-power-of-three) |
| [0342-power-of-four](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0342-power-of-four) |
## Array
|  |
| ------- |
| [0001-two-sum](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0001-two-sum) |
| [0053-maximum-subarray](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0053-maximum-subarray) |
| [0075-sort-colors](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0075-sort-colors) |
| [0136-single-number](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0136-single-number) |
| [0162-find-peak-element](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0162-find-peak-element) |
| [0167-two-sum-ii-input-array-is-sorted](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0167-two-sum-ii-input-array-is-sorted) |
| [0414-third-maximum-number](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0414-third-maximum-number) |
| [0744-find-smallest-letter-greater-than-target](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0744-find-smallest-letter-greater-than-target) |
| [0747-largest-number-at-least-twice-of-others](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0747-largest-number-at-least-twice-of-others) |
| [0852-peak-index-in-a-mountain-array](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0852-peak-index-in-a-mountain-array) |
| [0867-transpose-matrix](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0867-transpose-matrix) |
| [0977-squares-of-a-sorted-array](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0977-squares-of-a-sorted-array) |
| [2913-subarrays-distinct-element-sum-of-squares-i](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2913-subarrays-distinct-element-sum-of-squares-i) |
| [3875-construct-uniform-parity-array-i](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/3875-construct-uniform-parity-array-i) |
## Sorting
|  |
| ------- |
| [0075-sort-colors](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0075-sort-colors) |
| [0242-valid-anagram](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0242-valid-anagram) |
| [0389-find-the-difference](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0389-find-the-difference) |
| [0414-third-maximum-number](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0414-third-maximum-number) |
| [0747-largest-number-at-least-twice-of-others](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0747-largest-number-at-least-twice-of-others) |
| [0977-squares-of-a-sorted-array](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0977-squares-of-a-sorted-array) |
## Backtracking
|  |
| ------- |
| [0077-combinations](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0077-combinations) |
| [0089-gray-code](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0089-gray-code) |
## Divide and Conquer
|  |
| ------- |
| [0053-maximum-subarray](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0053-maximum-subarray) |
## Dynamic Programming
|  |
| ------- |
| [0053-maximum-subarray](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0053-maximum-subarray) |
## Simulation
|  |
| ------- |
| [0258-add-digits](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0258-add-digits) |
| [0867-transpose-matrix](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0867-transpose-matrix) |
| [2243-calculate-digit-sum-of-a-string](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2243-calculate-digit-sum-of-a-string) |
## Number Theory
|  |
| ------- |
| [0258-add-digits](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0258-add-digits) |
## Greedy
|  |
| ------- |
| [1432-max-difference-you-can-get-from-changing-an-integer](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/1432-max-difference-you-can-get-from-changing-an-integer) |
## Enumeration
|  |
| ------- |
| [2843-count-symmetric-integers](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2843-count-symmetric-integers) |
## String
|  |
| ------- |
| [0008-string-to-integer-atoi](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0008-string-to-integer-atoi) |
| [0125-valid-palindrome](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0125-valid-palindrome) |
| [0242-valid-anagram](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0242-valid-anagram) |
| [0344-reverse-string](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0344-reverse-string) |
| [0383-ransom-note](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0383-ransom-note) |
| [0387-first-unique-character-in-a-string](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0387-first-unique-character-in-a-string) |
| [0389-find-the-difference](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0389-find-the-difference) |
| [2243-calculate-digit-sum-of-a-string](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2243-calculate-digit-sum-of-a-string) |
| [2264-largest-3-same-digit-number-in-string](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2264-largest-3-same-digit-number-in-string) |
## Hash Table
|  |
| ------- |
| [0001-two-sum](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0001-two-sum) |
| [0141-linked-list-cycle](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0141-linked-list-cycle) |
| [0160-intersection-of-two-linked-lists](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0160-intersection-of-two-linked-lists) |
| [0242-valid-anagram](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0242-valid-anagram) |
| [0383-ransom-note](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0383-ransom-note) |
| [0387-first-unique-character-in-a-string](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0387-first-unique-character-in-a-string) |
| [0389-find-the-difference](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0389-find-the-difference) |
| [2913-subarrays-distinct-element-sum-of-squares-i](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2913-subarrays-distinct-element-sum-of-squares-i) |
## Two Pointers
|  |
| ------- |
| [0019-remove-nth-node-from-end-of-list](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0019-remove-nth-node-from-end-of-list) |
| [0075-sort-colors](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0075-sort-colors) |
| [0125-valid-palindrome](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0125-valid-palindrome) |
| [0141-linked-list-cycle](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0141-linked-list-cycle) |
| [0160-intersection-of-two-linked-lists](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0160-intersection-of-two-linked-lists) |
| [0167-two-sum-ii-input-array-is-sorted](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0167-two-sum-ii-input-array-is-sorted) |
| [0344-reverse-string](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0344-reverse-string) |
| [0876-middle-of-the-linked-list](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0876-middle-of-the-linked-list) |
| [0977-squares-of-a-sorted-array](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0977-squares-of-a-sorted-array) |
## Binary Search
|  |
| ------- |
| [0162-find-peak-element](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0162-find-peak-element) |
| [0167-two-sum-ii-input-array-is-sorted](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0167-two-sum-ii-input-array-is-sorted) |
| [0367-valid-perfect-square](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0367-valid-perfect-square) |
| [0744-find-smallest-letter-greater-than-target](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0744-find-smallest-letter-greater-than-target) |
| [0852-peak-index-in-a-mountain-array](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0852-peak-index-in-a-mountain-array) |
## Quicksort
|  |
| ------- |
| [0075-sort-colors](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0075-sort-colors) |
## Bubble Sort
|  |
| ------- |
| [0075-sort-colors](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0075-sort-colors) |
## Queue
|  |
| ------- |
| [0387-first-unique-character-in-a-string](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0387-first-unique-character-in-a-string) |
## Counting
|  |
| ------- |
| [0383-ransom-note](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0383-ransom-note) |
| [0387-first-unique-character-in-a-string](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0387-first-unique-character-in-a-string) |
## Tree
|  |
| ------- |
| [0100-same-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0100-same-tree) |
| [0101-symmetric-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0101-symmetric-tree) |
| [0102-binary-tree-level-order-traversal](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0102-binary-tree-level-order-traversal) |
| [0104-maximum-depth-of-binary-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0104-maximum-depth-of-binary-tree) |
| [0111-minimum-depth-of-binary-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0111-minimum-depth-of-binary-tree) |
| [0112-path-sum](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0112-path-sum) |
| [0700-search-in-a-binary-search-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0700-search-in-a-binary-search-tree) |
## Binary Search Tree
|  |
| ------- |
| [0700-search-in-a-binary-search-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0700-search-in-a-binary-search-tree) |
## Binary Tree
|  |
| ------- |
| [0100-same-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0100-same-tree) |
| [0101-symmetric-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0101-symmetric-tree) |
| [0102-binary-tree-level-order-traversal](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0102-binary-tree-level-order-traversal) |
| [0104-maximum-depth-of-binary-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0104-maximum-depth-of-binary-tree) |
| [0111-minimum-depth-of-binary-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0111-minimum-depth-of-binary-tree) |
| [0112-path-sum](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0112-path-sum) |
| [0700-search-in-a-binary-search-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0700-search-in-a-binary-search-tree) |
## Matrix
|  |
| ------- |
| [0867-transpose-matrix](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0867-transpose-matrix) |
## Binary Indexed Tree
|  |
| ------- |
| [2913-subarrays-distinct-element-sum-of-squares-i](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2913-subarrays-distinct-element-sum-of-squares-i) |
## Segment Tree
|  |
| ------- |
| [2913-subarrays-distinct-element-sum-of-squares-i](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2913-subarrays-distinct-element-sum-of-squares-i) |
## Linked List
|  |
| ------- |
| [0019-remove-nth-node-from-end-of-list](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0019-remove-nth-node-from-end-of-list) |
| [0021-merge-two-sorted-lists](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0021-merge-two-sorted-lists) |
| [0083-remove-duplicates-from-sorted-list](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0083-remove-duplicates-from-sorted-list) |
| [0141-linked-list-cycle](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0141-linked-list-cycle) |
| [0160-intersection-of-two-linked-lists](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0160-intersection-of-two-linked-lists) |
| [0206-reverse-linked-list](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0206-reverse-linked-list) |
| [0237-delete-node-in-a-linked-list](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0237-delete-node-in-a-linked-list) |
| [0876-middle-of-the-linked-list](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0876-middle-of-the-linked-list) |
## Depth-First Search
|  |
| ------- |
| [0100-same-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0100-same-tree) |
| [0101-symmetric-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0101-symmetric-tree) |
| [0104-maximum-depth-of-binary-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0104-maximum-depth-of-binary-tree) |
| [0111-minimum-depth-of-binary-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0111-minimum-depth-of-binary-tree) |
| [0112-path-sum](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0112-path-sum) |
## Breadth-First Search
|  |
| ------- |
| [0100-same-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0100-same-tree) |
| [0101-symmetric-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0101-symmetric-tree) |
| [0102-binary-tree-level-order-traversal](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0102-binary-tree-level-order-traversal) |
| [0104-maximum-depth-of-binary-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0104-maximum-depth-of-binary-tree) |
| [0111-minimum-depth-of-binary-tree](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0111-minimum-depth-of-binary-tree) |
| [0112-path-sum](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0112-path-sum) |
## Ternary Search
|  |
| ------- |
| [0852-peak-index-in-a-mountain-array](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0852-peak-index-in-a-mountain-array) |
## Floyd's Cycle Finding Algorithm
|  |
| ------- |
| [0141-linked-list-cycle](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0141-linked-list-cycle) |
<!---LeetCode Topics End-->