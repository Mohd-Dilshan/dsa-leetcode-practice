/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int findLeftMost(vector<int> &nums, int target, int n){
        int l = 0, r= n-1;

        int left_most = -1;

        while(l<=r ) {
            int mid = l+(r-l)/2;

            if (nums[mid] == target) {
                left_most = mid;
                r = mid-1; // for more left
            } else if (nums[mid] < target) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }

        return left_most;
    }
    
    int findRightMost(vector<int>& nums, int target, int n) {
        int l = 0, r= n-1;

        int right_most = -1;

        while(l<=r ) {
            int mid = l+(r-l)/2;

            if (nums[mid] == target) {
                right_most = mid; // possible answer
                l = mid+1; // for more right
            } else if (nums[mid] < target) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }

        return right_most;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int left_most =  findLeftMost(nums, target, n);
        int right_most = findRightMost(nums, target, n);

        return {left_most, right_most};

    }
};
// @lc code=end

