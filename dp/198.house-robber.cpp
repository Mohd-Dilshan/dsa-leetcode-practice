/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
#include<vector>
#include <cstring>
using namespace std;
class Solution {
public:

    // recursion and memoization- Top Down
    // int t[101];
    // int solve(vector<int>& nums, int i, int n) {
    //     if (i >= n) return 0;

    //     if (t[i] != -1) return t[i];

    //     int steal = nums[i] + solve(nums, i+2, n);
    //     int skip = solve(nums, i+1, n);

    //     return max (steal, skip);
    // }

    // int rob(vector<int>& nums) {
    //     int n = nums.size();
    //     memset(t, -1, sizeof(t));
    //     return solve(nums, 0, n);

    // }

    // Bottom- up
    int rob (vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return nums[0];

        vector<int> t(n+1, 0);  //t[i]= max stolen money till ith house

        t[0] = 0;   // no house: i= 0
        
        t[1] = nums[0];  // 1house : i = 1

        for(int i = 2; i<=n; i++) {
            int steal = nums[i-1] + t[i-2];
            int skip = t[i-1];

            t[i] = max(steal, skip);
        }
        return t[n];
    }

};

// @lc code=end

