/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n+1);

        if(n == 0)
            return result;
        result[0] = 0; // Binary of 0 has 0 number of bits set as 1

        for (int i=1; i<=n; i++){
            if (i%2 != 0) {
                result[i] = result[i/2] + 1;
            } else {
                result[i] = result[i/2];
            }
        }
        return result;
    }
};
// @lc code=end

