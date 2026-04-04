/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n  = nums.size();

        int sum = 0;

        for (int &x : nums) {
            sum += x;
        }
        int cs = 0;

        for (int i = 0; i<n ; i++ ){
            int ls = cs;
            int rs = sum - cs - nums[i];

            if (ls == rs) {
                return i;
            }
            cs += nums[i];
        }
        return -1;
    }
};
// @lc code=end

