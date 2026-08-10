/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] ={0};

        for(int i = 0; i<magazine.length(); i++) {
            freq[magazine[i] -'a']++;
        }
        for (int i = 0; i<ransomNote.length();i++) {
            freq[ransomNote[i] -'a']--;

            if(freq[ransomNote[i] -'a']<0) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

