/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //sliding window
        int sum = 0;
        double res;
        for(int i=0; i<k; i++) sum += nums[i];
        res = sum;
        for(int i=k; i<nums.size(); i++){
            sum = sum - nums[i-k]; //1
            sum = sum + nums[i]; //2
            if(sum>res) res = sum;
        }
        return res/k;
    }
};
// @lc code=end

