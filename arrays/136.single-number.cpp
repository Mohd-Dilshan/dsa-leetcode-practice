/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0; // n ^ 0 = n

        for (int num :nums) {
            res ^=num; // n ^ n = 0
        }
        return res;
    }
};
// @lc code=end

