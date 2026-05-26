/*
 * @lc app=leetcode id=72 lang=cpp
 *
 * [72] Edit Distance
 */

// @lc code=start
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    //Rec +Mem :starting from i = 0, j = 0)
    //T.C : O(m*n)
    //S.C : O(m*n)
    int t[501][501];
    int m, n;
    int solve(string& s1, string& s2, int i, int j) {
        if(i == m)
            return n-j;
        else if(j == n)
            return m-i;
        
        if(t[i][j] != -1)
            return t[i][j];
        
        if(s1[i] == s2[j])
            return t[i][j] = solve(s1, s2, i+1, j+1);
        else {
            int insertC  = 1 + solve(s1, s2, i, j+1);
            int deleteC  = 1 + solve(s1, s2, i+1, j);
            int replaceC = 1 + solve(s1, s2, i+1, j+1);
            
            return t[i][j] = min({insertC, deleteC, replaceC});
        }
        
    }

    int minDistance(string s1, string s2) {
        m = s1.length();
        n = s2.length();
        memset(t, -1, sizeof(t));
        return solve(s1, s2, 0, 0);
    }


    //Method 2   (Recur + Memo, starting from m, n)
    //T.C : O(m*n)
    //S.C : O(m*n)
    int t[501][501];
    int m, n;
    int solve(string& s1, string& s2, int m, int n) {
        if (m == 0 || n == 0)
            return m + n;
        
        if (t[m][n] != -1)
            return t[m][n];

        
        if(s1[m-1] == s2[n-1])
            return t[m][n] = solve(s1, s2, m-1, n-1);
        else {
            int insertC  = 1 + solve(s1, s2, m, n-1);
            int deleteC  = 1 + solve(s1, s2, m-1, n);
            int replaceC = 1 + solve(s1, s2, m-1, n-1);
            
            return t[m][n] = min({insertC, deleteC, replaceC});
        }
        return -1;
    }

    int minDistance(string s1, string s2) {
        m = s1.length();
        n = s2.length();
        memset(t, -1, sizeof(t));
        return solve(s1, s2, m, n);
    }

    // Bottom Up
    //T.C : O(m*n)
    //S.C : O(m*n)

    int minDistance(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        
         vector<vector<int>> t(m+1, vector<int>(n+1));
        
        for(int i = 0; i<m+1; i++) {
            for(int j = 0; j<n+1; j++) {
                if(i == 0 || j == 0)
                    t[i][j] = i+j;
                else if(s1[i-1] == s2[j-1])
                    t[i][j] = t[i-1][j-1];
                else
                    t[i][j] = 1 + min({t[i][j-1], t[i-1][j], t[i-1][j-1]});
            }
        }
        return t[m][n];
    }


};
// @lc code=end

