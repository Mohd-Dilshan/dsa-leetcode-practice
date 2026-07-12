/*
 * @lc app=leetcode id=91 lang=cpp
 *
 * [91] Decode Ways
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:

    //rec+mem
    //T.C : O(n) (without mem - O(2^n)
    //S.C : O(1)
    // int t[101];
    // int solve(int i, string &s, int &n) {
    //     if(t[i] != -1) {
    //         return t[i];
    //     }

    //     if(i == n) {
    //         return t[i] = 1;
    //     }

    //     if(s[i] == '0') {
    //         return t[i] = 0; 
    //     }

    //     int result     = solve(i+1, s, n);
        
    //     if(i+1 < n) {
    //         if(s[i] == '1' || (s[i] == '2' && s[i+1] <= '6'))
    //             result += solve(i+2, s, n);
    //     }

            
    //     return t[i] = result;

    // }

    // int numDecodings(string s) {
    //     int n = s.length();

    //     memset(t, -1, sizeof(t));
    //     return solve(0, s, n);
        

    // }


    //bottom-up
    //tc : O(n)
    //sc: O(n)
    int numDecodings(string &s) {
        int n = s.length();

        vector<int> t(n+1, 0);

        t[n] = 1;

        for(int i = n-1; i>=0; i--) {
            if(s[i] == '0')
                t[i] = 0;
            else {
                t[i] = t[i+1];
                if(i < n-1 && (s[i] == '1' || (s[i] == '2' && s[i+1] < '7')))
                    t[i] += t[i+2];
            }
        }

        return t[0];
    }
};
// @lc code=end

