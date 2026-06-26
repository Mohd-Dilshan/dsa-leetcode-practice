/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int i=0;
        string word="";
        while(i<max(n,m)){
            if(i<n){
                word+=word1[i];
            }
            if(i<m){
                word+=word2[i];
            }
            i++;
        }
        return word;
    }
};
// @lc code=end

