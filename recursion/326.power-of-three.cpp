/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

// @lc code=start
class Solution {
public:
    // approach-1
    // Time Complexity: O(log3 n)
    // Space Complexity: O(1)


    bool isPowerOfThree(int n) {
        if(n <= 0) {
            return false;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }


    // approach-2
    // Time Complexity: O(1)
    // Space Complexity: O(1)

    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0;
    }

};
// @lc code=end

