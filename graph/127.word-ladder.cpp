/*
 * @lc app=leetcode id=127 lang=cpp
 *
 * [127] Word Ladder
 */

// @lc code=start
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> m(wordList.begin(), wordList.end());
        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        
        while(!q.empty()){
            string tempstr = q.front().first;
            int tempval = q.front().second;
            q.pop();
            
            if(tempstr == endWord){
                return tempval;
            }
            
            for(int i = 0; i < tempstr.length(); i++){
                char temp2 = tempstr[i];
                for(char ch = 'a'; ch <= 'z'; ch++){
                    tempstr[i] = ch;
                    if(m.find(tempstr) != m.end()){
                        q.push({tempstr, tempval + 1});
                        m.erase(tempstr);
                    }
                }
                tempstr[i] = temp2;
            }
        }
        return 0;
    }
};
// @lc code=end

