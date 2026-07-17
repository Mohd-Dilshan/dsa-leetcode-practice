/*
 * @lc app=leetcode id=424 lang=cpp
 *
 * [424] Longest Repeating Character Replacement
 */

// @lc code=start
class Solution {
public:
    int characterReplacement(string s, int k) {
        
        unordered_map<char, int> count;
        
        int start = 0, end = 0, res = 0, maxFreq = 0;
        
        while(end < s.size()){
            count[s[end]]++;
            maxFreq = max(maxFreq, count[s[end]]);
            if(end - start + 1 - maxFreq > k){
                count[s[start]]--;
                start++;
            }
            
            res = max(res, end - start + 1);
            end++;
        }
        return res;
    }
};

// @lc code=end

