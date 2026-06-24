/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:

    //aprproch -1
    // vector<int> sortedSquares(vector<int>& nums) {
    //     //square all the nums
    //     for (int i = 0; i<nums.size(); i++) {
    //         nums[i] = nums[i] * nums[i];
    //     }
    //     //sort the arr
    //     sort(begin(nums), end(nums));

    //     return nums;
    // }

    //aprproch -2
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        vector<int>result(n);

        int i = 0, j = n-1;

        int k = n-1;

        while(k>= 0) {
            int a = nums[i] * nums[i];
            int b = nums[j] * nums[j];

            if(a>b) {
                result[k] = a;
                i++;
            }else{
                result[k] = b;
                j--;
            }
            k--;
        }
        return result;
    }
};
// @lc code=end

