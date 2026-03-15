/*
 * @lc app=leetcode id=2114 lang=cpp
 *
 * [2114] Maximum Number of Words Found in Sentences
 */

// @lc code=start
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        string x;
        int count, result = 0;
        for (int i = 0; i < sentences.size(); i++) {
            count = 1;
            x = sentences[i];
            for ( int j = 0; j < x.length(); j++) {
                if (x[j] == ' ') {
                    count++;
                }
            }
            result = max(result, count);
        }
        return result;
    }
};
// @lc code=end

