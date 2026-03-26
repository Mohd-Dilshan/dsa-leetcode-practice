/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // method 1: sorting

        sort (begin(s), end(s));
        sort (begin(t), end(t));

        return s==t;
        
        //method 2: counting
        // vector<int> count (26,0);

        // for (char &ch : s) {
        //     count[ch-'a']++;
        // }

        // for (char &ch : t) {
        //     count[ch-'a']--;
        // }
        // // check if all counts are zero
        // //fopr loop
        // bool allZeros = all_of (begin(count), end(count), [](int element){
    
        //     return element==0; 
        // });
        // return allZeros;


    }
};
// @lc code=end

