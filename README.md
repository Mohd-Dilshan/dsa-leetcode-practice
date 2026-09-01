# dsa-leetcode-practice
LeetCode problem solutions organized by topic such as arrays, strings, trees, graphs, dynamic programming, and more.
# DSA LeetCode Practice

This repository contains my solutions to various **LeetCode problems** implemented in **C++**.
The goal of this repository is to improve my **problem-solving skills**, strengthen my understanding of **Data Structures and Algorithms**, and prepare for **technical interviews**.

---

## 📌 Language

* C++

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
| [1281-subtract-the-product-and-sum-of-digits-of-an-integer](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/1281-subtract-the-product-and-sum-of-digits-of-an-integer) |
| [1432-max-difference-you-can-get-from-changing-an-integer](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/1432-max-difference-you-can-get-from-changing-an-integer) |
| [2235-add-two-integers](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2235-add-two-integers) |
| [2843-count-symmetric-integers](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2843-count-symmetric-integers) |
## Bit Manipulation
|  |
| ------- |
| [0089-gray-code](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0089-gray-code) |
| [0231-power-of-two](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0231-power-of-two) |
| [0342-power-of-four](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0342-power-of-four) |
## Recursion
|  |
| ------- |
| [0231-power-of-two](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0231-power-of-two) |
| [0326-power-of-three](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0326-power-of-three) |
| [0342-power-of-four](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0342-power-of-four) |
## Array
|  |
| ------- |
| [0001-two-sum](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0001-two-sum) |
| [0053-maximum-subarray](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0053-maximum-subarray) |
| [0167-two-sum-ii-input-array-is-sorted](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0167-two-sum-ii-input-array-is-sorted) |
| [0414-third-maximum-number](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0414-third-maximum-number) |
| [0747-largest-number-at-least-twice-of-others](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0747-largest-number-at-least-twice-of-others) |
## Sorting
|  |
| ------- |
| [0414-third-maximum-number](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0414-third-maximum-number) |
| [0747-largest-number-at-least-twice-of-others](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0747-largest-number-at-least-twice-of-others) |
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
| [0344-reverse-string](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0344-reverse-string) |
| [2243-calculate-digit-sum-of-a-string](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/2243-calculate-digit-sum-of-a-string) |
## Hash Table
|  |
| ------- |
| [0001-two-sum](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0001-two-sum) |
## Two Pointers
|  |
| ------- |
| [0167-two-sum-ii-input-array-is-sorted](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0167-two-sum-ii-input-array-is-sorted) |
| [0344-reverse-string](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0344-reverse-string) |
## Binary Search
|  |
| ------- |
| [0167-two-sum-ii-input-array-is-sorted](https://github.com/Mohd-Dilshan/dsa-leetcode-practice/tree/master/0167-two-sum-ii-input-array-is-sorted) |
<!---LeetCode Topics End-->