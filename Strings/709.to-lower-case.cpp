/*
 * @lc app=leetcode id=709 lang=cpp
 *
 * [709] To Lower Case
 */

// @lc code=start
#include <string>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();

        for (int i = 0; i <n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] -'A' + 'a';
            }
        }
        return s;
    }
};
// @lc code=end

