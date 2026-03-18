/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;
         while (left <right ) {
            swap(s[left], s[right]);
            left++;
            right--;
        }

    }
};
// @lc code=end

