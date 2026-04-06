/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        int i = n-1; //Start from the LSB like usually do in addition

        while (i >= 0) {
            if (digits[i] < 9) {
                digits[i]++; //If the digit is less than 9, we can simply add 1 and return the result
                return digits;
            } 
            //else we did get 9, we need to set it to 0 and continue to the next digit
            digits[i] = 0; // 9+1 = 10, so we set the current digit to 0 and move to the next digit
            i--;
        }
        digits.insert(begin(digits), 1); // If we exit the loop, it means we had a carry from the most significant digit, so we need to insert 1 at the beginning of the vector
        return digits;
    }
};
// @lc code=end

