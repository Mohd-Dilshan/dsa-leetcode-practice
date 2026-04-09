/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
#include <vector>
using  namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(); //size of the array

        int i = 0 , j = 1; 

        while( j < n ){
            if (nums[i] != nums[j]) { // unique element 
                i++;
                nums[i] = nums[j];
            }
            j++; // to find the next unique element
        }
        return i+1;
    }
};
// @lc code=end

