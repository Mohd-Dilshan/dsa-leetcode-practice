/*
 * @lc app=leetcode id=394 lang=cpp
 *
 * [394] Decode String
 */

// @lc code=start
class Solution {
public:
    string decodeString(string s) {
        stack<int> count;
        stack<string> strs;
        string curr = "";
        int num = 0;

        for (auto c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            } else if (c == '[') {
                count.push(num);
                strs.push(curr);
                num = 0;
                curr = "";
            } else if (c == ']') {
                int rep = count.top();
                count.pop();
                string temp = curr;
                curr = strs.top();
                strs.pop();
                while (rep--) {
                    curr += temp;
                }
            } else {
                curr += c;
            }
        }
        return curr;
    }
};   
// @lc code=end

