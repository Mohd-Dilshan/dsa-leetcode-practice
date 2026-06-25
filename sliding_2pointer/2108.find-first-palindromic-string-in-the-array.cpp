/*
 * @lc app=leetcode id=2108 lang=cpp
 *
 * [2108] Find First Palindromic String in the Array
 */

// @lc code=start
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        //approach:-1
        // for (string &word : words) {
        //     if (word == string(rbegin(word), rend(word))) {
        //         return word;
        //     }
        // }
        // return "";


        //app:-2
        for (string &word : words) {
            int n = word.size();
            if (equal(word.begin(),word.begin() + n/2, word.rbegin())) {
                return word;
            }
        }
        return "";
        
    }
};
// @lc code=end

