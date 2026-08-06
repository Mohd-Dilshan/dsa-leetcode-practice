/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    int reverseBits(int n) {
        if (n == 0) {
            return 0;
        }
        int result = 0;
        for (int i = 1; i<=32; i++) {
            result <<= 1;

            result = (result | (n & 1));
            n >>= 1;
        }
        return result;
    }
};
// @lc code=end

