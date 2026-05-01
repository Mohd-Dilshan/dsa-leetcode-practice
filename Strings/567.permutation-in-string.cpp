/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:

    // int n;
    // bool result;

    // void solve(int idx, string &s1, string &s2) {
    //     if (idx == n) {
    //         if(s2.find(s1) != string::npos) {
    //             result = true;
    //         }
    //         return;
    //     }
    //     for (int i = idx; i<n; i++) {
    //         swap(s1[idx], s1[i]);
    //         solve(idx+1, s1, s2);
    //         swap(s1[idx], s1[i]);

    //         if (result == true) {
    //             return;
    //         }
    //     }
    // }
    // bool checkInclusion(string s1, string s2) {
    //     n =s1.size();
    //     result = false;
    //     solve(0, s1, s2);
    //     return result;   
    // }

    bool checkInclusion(string s1, string s2) {

        // int n = s1.length();
        // int m = s2.length();

        // if (n > m) {
        //     return false;
        // }

        // sort(begin(s1), end(s1));
        // //T.C O(nlogn) + O((m-n)*nlogn) = O(m*nlogn)
        // //S.C O(n) for sorting s1 and O(n) for sorting each substring of s2 
        
        // for (int i = 0; i<m-n; i++) {
        //     string substring = s2.substr(i, n);

        //     sort(begin(substring), end(substring));

        //     if(substring == s1) {
        //         return true;
        //     }
        // }
        // return false;


        // T.C O(m+n) for frequency arrays and O(m) for comparing the frequency arrays in the worst case
        // S.C O(1) for frequency arrays
        int n = s1.length();
        int m = s2.length();

        if (n > m) {
            return false;
        }

        vector<int> s1_freq(26, 0);
        vector<int> s2_freq(26, 0);

        for (char &ch : s1) {
            s1_freq[ch - 'a']++;
        }
        int i = 0;
        int j = 0;
        while (j<m ){
            s2_freq[s2[j] - 'a']++;

            if (j - i + 1 > n) { // time to shrink the window
                s2_freq[s2[i] - 'a']--;
                i++;
            }
            if(s1_freq == s2_freq) {
                return true;
            }
            j++;
        }
        return false;
    }


};
// @lc code=end

