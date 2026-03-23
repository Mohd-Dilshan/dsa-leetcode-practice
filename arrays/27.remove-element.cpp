/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //sort this array first
        std::sort(nums.begin(), nums.end());
        
        //first we find the index where copies of the val start
        int i = 0;
        while (i<nums.size() && nums[i] != val) {
            i++;
        }

        //retrun i, if i equals nums.size();

        if (i == nums.size()) {
            return i;
        }

        // find the indices containig the copies of val

        int j = i ;
        while (j< nums.size() && nums[j] == val) {
            j++;
        }

        // i to j-1

        if (j == nums.size()) {
            //first i values are not equal to val, 
            // copies of val from ith index till the end of the array 
            return i;
        }

        // copy non-val values frpm jth index to ith index
        while (j<nums.size()) {
            nums[i] = nums[j];
            i++;
            j++;
        }
        return i;
    }
};
// @lc code=end

