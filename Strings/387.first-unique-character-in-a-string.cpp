/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};

        int n = s.size();

        for (int i = 0; i < n; i++) {
            char ch = s[i];
            arr[ch - 'a']++;
        }
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (arr[ch - 'a'] == 1) {
                return i;
            }
        }
        return -1;
        
    }
};
// @lc code=end

