/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //Brute Force O(n^2) time complexity
        // vector<int> ans(nums.size(), 1);
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j<n; j++) {
        //         if (i !=  j) {
        //             ans[i] *= nums[j];
        //         }
        //     }
        // }
        // return ans;


        //Optimal Solution O(n) time complexity and O(1) space complexity
        int n = nums.size();
        vector<int> ans(n, 1);
        //prefix => ans
        for (int i =1; i<n; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }
        //suffix
        int suffix = 1;
        for (int i = n-2; i>=0; i--) {
            suffix *= nums[i+1];   // ith suffix 
            ans[i] *= suffix;
        }
        return ans;
    }
};
// @lc code=end

