/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
#include<string>
#include<unordered_map>
#include<climits>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        if (t.length() > n)
            return "";
            
        unordered_map< char , int > mp;
        // Store the frequency of each character in t
        for (char &ch : t)
            mp[ch]++;
        
        int requiredCount = t.length(); // Total characters needed to form the window

        int i=0, j =0 ;

        int minWindowSize = INT_MAX;

        int start_i = 0; // To store the starting index of the minimum window

        //start sliding the window
        while (j < n){
            char ch = s[j];
            // If the current character is in t, decrease the required count
            if (mp[ch]>0)
                requiredCount--;
            mp[ch]--; // Decrease the frequency in the map

            while (requiredCount == 0) {
                //Start shrinking the window
                int currWindowSize = j - i +1;

                if (minWindowSize > currWindowSize) {
                    minWindowSize = currWindowSize;
                    start_i = i; // Update the starting index of the minimum window
                }
                mp[s[i]]++; // Increase the frequency in the map as we are moving the left pointer

                if(mp[s[j]] > 0) {// If the character at the left pointer is in t, increase the required count
                    requiredCount++;
                }
                i++; // Move the left pointer to shrink the window
            }
            j++; // Move the right pointer to expand the window
        }
        return minWindowSize == INT_MAX ? "" : s.substr(start_i, minWindowSize);
    } 
};
// @lc code=end

