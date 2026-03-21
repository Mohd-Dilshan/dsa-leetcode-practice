/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int i = 0;  // index of the last 0
        int j = 0; // index of the last 1 
        int k = n-1; // index of the last 2

        while (j <= k )  {
            if (nums[j] == 1 ) {
                j++;
            } else if (nums[j] == 2) {
                swap(nums[j], nums[k]);
                k--;
            } else {
                //nums[j] == 0
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }


    }
};
// @lc code=end

