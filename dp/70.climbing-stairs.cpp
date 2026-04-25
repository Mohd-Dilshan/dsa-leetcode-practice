/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
#include <iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int x = 1, y = 2;

        for (int i = 3; i<n ; i++) {
            int temp = y;
            y = x + y;
            x = temp;
        }
        return x + y;
    }
};
// @lc code=end

