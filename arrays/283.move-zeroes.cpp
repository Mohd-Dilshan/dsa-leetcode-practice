/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
#include <vector> 
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Two pointers approach
        int n = nums.size();
        int l = 0, r = 0;

        while (r < n) {
            if(nums[r] != 0)  {
                swap(nums[l], nums[r]);
                l++;
            }
            r++;
        }




    }
};
// @lc code=end

