/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // brute force o(n*n)
        int n = nums.size();
        for (int val : nums) {
            int freq = 0;
            for (int el : nums){
                if(el == val) {
                    freq++;
                }
            }
            if(freq > n/2) {
                return val;
            }
        }
        return -1;


        // optimal: using sorting o(nlogn)
        int n = nums.size();

        sort(nums.begin(), nums.end());
        int freq = 1, ans = nums[0];

        for (int i = 1; i<n; i++) {
            if(nums[i] == nums[i-1]) {
                freq++;
            } else {
                freq = 1;
                ans = nums[i];
            }
            if(freq > n/2){
                return ans;
            }
         }
        return ans;


        //Moore's Voting Algo ; TC: o(n)
        int freq = 0, ans = 0;

        for (int i = 0; i<nums.size(); i++) {
            if(freq == 0) {
                ans = nums[i];
            }
            if(ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }
        return ans;
    }
};
// @lc code=end

