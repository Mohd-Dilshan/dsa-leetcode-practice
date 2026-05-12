/*
 * @lc app=leetcode id=556 lang=cpp
 *
 * [556] Next Greater Element III
 */

// @lc code=start
#include<string>>
#include<algorithm>
#include<climits>
using namespace std;
class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        // find the pivot
        int i = s.size() -2;

        while (i>= 0 && s[i] >= s[i+1]) {
            --i;
        }
        // no greater el exists
        if (i<0) {
            return -1;
        }
        //find next greater el
        int j = s.size() -1;
        while (s[j] <= s[i] ) {
            --j;
        }
        //swap pivot and next greater digit
         swap(s[i], s[j]);

        //  Reverse suffix
        reverse(s.begin() + i + 1, s.end());

        // Convert to long long to avoid overflow
        long long ans = stoll(s);

        return (ans > INT_MAX) ? -1 : (int)ans;


    }
};
// @lc code=end

