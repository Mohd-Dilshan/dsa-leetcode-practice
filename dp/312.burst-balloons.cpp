/*
 * @lc app=leetcode id=312 lang=cpp
 *
 * [312] Burst Balloons
 */

// @lc code=start
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
class Solution {
public:
    int cal(vector<int> &nums, int l, int r, vector<vector<int>> &dp){
        if(dp[l][r] != -1){
            return dp[l][r];
        }
        
        int ans = INT_MIN;
        for(int i = l; i <= r; i++){
            int left = 1, right = 1;
            int a = 0, b = 0;
            
            if(i - 1 >= l){
                left = cal(nums, l, i - 1, dp);
                a = left;
            }
            else{
                left = nums[l - 1];
                a = 0;
            }
            
            if(i + 1 <= r){
                right = cal(nums, i + 1, r, dp);
                b = right;
            }
            else{
                right = nums[r + 1];
                b = 0;
            }
            
            ans = max(ans, nums[i] * nums[l - 1] * nums[r + 1] + a + b);
        }
        
        return dp[l][r] = ans;
    }
    
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size(), -1));
        return cal(nums, 1, nums.size() - 2, dp);
    }
};
// @lc code=end

