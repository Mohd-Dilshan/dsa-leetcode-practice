/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.size();
        int n = nums2.size();

        int l = 0;
        int r = m;

        while (l <= r) {

            int Px = l + (r -l)/2;  // mid - from nums1
            int Py = (m+n+1)/2 - Px; //mid - from nums2

            //left half wale
            int x1 = (Px == 0) ? INT_MIN : nums1[Px-1];
            int x2 = (Py == 0) ? INT_MIN : nums2[Py-1];
            //right half wale
            int x3 = (Px == m) ? INT_MAX : nums1[Px];
            int x4 = (Py == n) ? INT_MAX : nums2[Py];

            if (x1 <= x4 && x2 <= x3) {
                if ((m+n) %2 == 1) {
                    return max(x1, x2);
                } else {
                    return (max(x1, x2) + min(x3, x4))/2.0;
                }
            }

            if (x1 > x4) {
                r = Px - 1;

            }else  {
                l = Px + 1;
            }

        }
        return -1;
    }
};
// @lc code=end



*******JAVA
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        // Ensure nums1 is the smaller array to minimize binary search range
        if (nums1.length > nums2.length) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.length;
        int n = nums2.length;
        int l = 0;
        int r = m;

        while (l <= r) {
            int Px = l + (r - l) / 2; // mid point for nums1
            int Py = (m + n + 1) / 2 - Px; // partition point for nums2

            // Left half elements
            int x1 = (Px == 0) ? Integer.MIN_VALUE : nums1[Px - 1];
            int x2 = (Py == 0) ? Integer.MIN_VALUE : nums2[Py - 1];

            // Right half elements
            int x3 = (Px == m) ? Integer.MAX_VALUE : nums1[Px];
            int x4 = (Py == n) ? Integer.MAX_VALUE : nums2[Py];

            // Check if correct partition is found
            if (x1 <= x4 && x2 <= x3) {
                if ((m + n) % 2 == 1) {
                    return Math.max(x1, x2);
                } else {
                    return (Math.max(x1, x2) + Math.min(x3, x4)) / 2.0;
                }
            }
       
            if (x1 > x4) {
                r = Px - 1;
            } else {
                l = Px + 1;
            }
        }
        return -1;
    }
}


