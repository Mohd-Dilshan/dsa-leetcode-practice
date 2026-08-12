/*
 * @lc app=leetcode id=201 lang=cpp
 *
 * [201] Bitwise AND of Numbers Range
 */

// @lc code=start
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while(left < right) {
            right = left & (right-1);
        }
        return right;
    }
};
// @lc code=end

