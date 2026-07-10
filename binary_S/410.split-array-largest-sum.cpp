/*
 * @lc app=leetcode id=410 lang=cpp
 *
 * [410] Split Array Largest Sum
 */

// @lc code=start
class Solution {
public:
    // T.C : O(nlogn), S.C:O(1) 
    int helper(vector<int>& nums, int mid) {
        int count = 1, tempSum = 0;

        for (int i = 0; i<nums.size();i++) {
            if(tempSum + nums[i] <= mid) {
                tempSum += nums[i];
            }
            else {
                count++;
                tempSum = nums[i];
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int l = 0, r = 0, ans = 0;
        for (auto x : nums) {
            l = max(l, x);
            r += x;
        }
        while (l<=r) {
            int mid = (l+r) >> 1;

            int count = helper(nums, mid);

            if(count <= k) {
                r = mid - 1;
                ans = mid;
            }
            else {
                l = mid +1 ;
            }
        }
        return ans;
    }
};
// @lc code=end

