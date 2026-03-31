/*
 * @lc app=leetcode id=1528 lang=cpp
 *
 * [1528] Shuffle String
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // 1. Create a new character array to hold the shuffled characters
        string str(s.length(), ' ');

        // 2. Iterate through the indices and place each character in its correct position

        for (int i = 0; i < s.length(); i++) {
            str[indices[i]] = s[i];
        }

        // 3. Return the shuffled string
        return str;


    }
};
// @lc code=end

