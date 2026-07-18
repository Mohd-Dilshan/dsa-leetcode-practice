/*
 * @lc app=leetcode id=30 lang=cpp
 *
 * [30] Substring with Concatenation of All Words
 */

// @lc code=start
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;

        int n = words.size();
        int wordLen = words[0].size();
        int totalLen = n * wordLen;

        if (s.size() < totalLen)
            return ans;

        unordered_map<string, int> freq;
        for (string &word : words)
            freq[word]++;

        // Try every possible starting offset
        for (int offset = 0; offset < wordLen; offset++) {

            unordered_map<string, int> window;
            int left = offset;
            int count = 0;

            // Move right one word at a time
            for (int right = offset; right + wordLen <= s.size(); right += wordLen) {

                string word = s.substr(right, wordLen);

                // Invalid word -> reset window
                if (!freq.count(word)) {
                    window.clear();
                    count = 0;
                    left = right + wordLen;
                    continue;
                }

                window[word]++;
                count++;
                // Too many copies of current word
                while (window[word] > freq[word]) {
                    string leftWord = s.substr(left, wordLen);
                    window[leftWord]--;
                    left += wordLen;
                    count--;
                }
                // Found a valid window
                if (count == n) {
                    ans.push_back(left);
                    // Slide window by one word
                    string leftWord = s.substr(left, wordLen);
                    window[leftWord]--;
                    left += wordLen;
                    count--;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

