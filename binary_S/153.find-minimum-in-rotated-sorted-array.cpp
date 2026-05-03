/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
       int n = nums.size() ;
       
       int l = 0, r = n - 1 ;

       while(l<r) {
        int mid = l +(r-l)/2;

        if (nums[mid] > nums[r]) {
            l = mid +1; // move right
        } else {
            r = mid; // move left
        }
       }
       return nums[r];
    }
};
// @lc code=end

