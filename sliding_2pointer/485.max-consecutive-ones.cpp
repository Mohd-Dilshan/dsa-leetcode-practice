/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxCount= INT_MIN;
        for (int i = 0; i < n; i++ ){
            if (nums[i]==1) {
                count++;
            } else {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        maxCount = max(maxCount, count);
        return maxCount;

    }
};
// @lc code=end

