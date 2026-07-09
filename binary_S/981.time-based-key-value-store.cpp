/*
 * @lc app=leetcode id=981 lang=cpp
 *
 * [981] Time Based Key-Value Store
 */

// @lc code=start

#include <unordered_map>
using namespace std;
class TimeMap {
public:
    // Map each key to a list of (value, timestamp) pairs.
    // Values are appended in non-decreasing timestamp order.
    unordered_map<string, vector<pair<string, int>>> hmap;

    TimeMap() {
        // Default constructor.
    }
    
    // Store the value with the given timestamp for the key.
    void set(string key, string value, int timestamp) {
        if (hmap.find(key) == hmap.end()) {
            hmap[key] = vector<pair<string, int>>();
        }

        hmap[key].push_back({value, timestamp});
    }
    
    // Retrieve the value with the largest timestamp <= requested timestamp.
    string get(string key, int timestamp) {
        string ans = "";
        vector<pair<string, int>>& values = hmap[key]; // empty if key is missing

        int l = 0;
        int r = values.size() - 1;

        while (l <= r) {
            int m = l + (r - l) / 2;

            if (values[m].second <= timestamp) {
                ans = values[m].first;
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
// Store all values of each key in a list.
// Since timestamps are already sorted, just append new entries.
// When searching:
// If the middle timestamp is ≤ target, remember it and search right.
// If the middle timestamp is > target, search left.
// The last remembered value is the answer.

// This is why:

// set() is O(1) (append to the vector).
// get() is O(log n) (binary search on the sorted timestamps).
// @lc code=end

