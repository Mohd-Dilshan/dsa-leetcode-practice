/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (const vector<int>& account : accounts) {
            int sum = 0;                
            for (int amt : account) {
                sum += amt;
            }
            if (maxWealth < sum) {
                maxWealth = sum;
            }
        }

        return maxWealth;
    }
};
// @lc code=end

