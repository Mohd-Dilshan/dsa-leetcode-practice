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

Maintained by me as part of my **DSA learning journey**.
