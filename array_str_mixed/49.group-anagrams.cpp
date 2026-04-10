/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        //Method 1: Using sorting ; Time complexity :n*klog(k); Space complexity : n*k; k = max size of string in the input; n = size of input
        int n =  strs.size();

        vector<vector<string>> result;

        unordered_map<string, vector<string>> mp;


        for (int i = 0; i< n ; i++) { //n
            string temp = strs[i];
            sort(begin(temp), end(temp)); // klog(k)

            mp[temp].push_back(strs[i]);
        }
        for(auto it : mp){
            result.push_back(it.second);
        }
        return result;

        //Method 2: 
    }
};
// @lc code=end

