/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mymap{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}

        };
        int result = 0;
        for (int i = 0; i<s.size(); i++) {
            if(mymap[s[i]] < mymap[s[i+1]]) {
                result -= mymap[s[i]];
            } else {
                result += mymap[s[i]];
            }
        }
        return result;
    }
};
// @lc code=end

