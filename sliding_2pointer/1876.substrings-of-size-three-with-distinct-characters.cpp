/*
 * @lc app=leetcode id=1876 lang=cpp
 *
 * [1876] Substrings of Size Three with Distinct Characters
 */

// @lc code=start
class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char, int> mp;
        int ans = 0;
        int k = 3;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;

            if (i < k - 1)
                continue;

            if (mp.size() == k) {
                ans++;
            }

            int ind = i - k + 1;

            mp[s[ind]]--;
            if (mp[s[ind]] == 0) {
                mp.erase(s[ind]);
            }
        }

        return ans;
    }
};
// @lc code=end

