/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        //Method 1: Using sum of n natural numbers

        // int sum = n*(n+1)/2;

        // for (int i = 0; i<n; i++) {
        //     sum -= nums[i];
        // }
        // return sum;


        //Method 2: Using XOR
        // int result = n;

        // for (int i = 0; i<n ; i++){
        //     result ^= i;
        //     result ^= nums[i];
        // }
        // return result;


        //Method 3: Using binary sort

        sort (nums.begin(), nums.end());
        int result = n;

        int l = 0, r= n-1;

        while (l<=r) {
            int mid = l + (r-l)/2;

            if (nums[mid]>mid) {
                result = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        return result;


    }
};
// @lc code=end

