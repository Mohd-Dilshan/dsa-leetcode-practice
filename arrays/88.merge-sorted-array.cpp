/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //copying values of num2 into the vacant spaces of num1

        // int index = m;

        // for (int i = 0; i<n ; i++) { // o(n)
        //     nums1[index++] = nums2[i];
        // }

        // //sort num1
        // std::sort(nums1.begin(), nums1.end()); // O(n log n); N=m+n

        //start filling the values into nums1 from the right hand side of the array

        int index = m+n-1; 

        int i = m-1;
        int j = n-1;

        while (i>=0 && j>=0) {
            if (nums1[i]> nums2[j]) {
                nums1[index] = nums1[i];
                i--;
            }
            else {
                nums1[index] = nums2[j];
                j--;
            }
            index--;
        }

        //if there are any values left in  num1
        while (i>=0) {
            nums1[index] = nums1[i];
            i--;
            index--;
        }

        //if there are any values left in  num2
        while (j>=0) {
            nums1[index] = nums2[j];
            j--;
            index--;
        }

        //cp= O(m+n) and sc = O(1)
    }

};
// @lc code=end

