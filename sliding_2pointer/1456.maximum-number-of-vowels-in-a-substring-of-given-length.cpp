/*
 * @lc app=leetcode id=1456 lang=cpp
 *
 * [1456] Maximum Number of Vowels in a Substring of Given Length
 */

// @lc code=start
class Solution {
public:
    bool isVowel(char &ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    
    int maxVowels(string s, int k) {
        int n = s.length();
        
        int maxVowelsCount  = 0;
        int count = 0;
        int i = 0, j = 0;
        
        while(j < n) {
            
            if(isVowel(s[j]))
                count++;
            
            if(j-i+1 == k) {
                maxVowelsCount = max(maxVowelsCount, count);
                if(isVowel(s[i]))
                    count--;
                i++;
            }
            
            j++;
        }
        
        return maxVowelsCount;
    }
};
// @lc code=end





//***************************************************
class Solution {

    public boolean isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    public int maxVowels(String s, int k) {
        int n = s.length();

        int maxV = 0;
        int count = 0;
        int i = 0, j = 0;

        while (j < n) {

            if (isVowel(s.charAt(j))) {
                count++;
            }

            if (j - i + 1 == k) {
                maxV = Math.max(maxV, count);

                if (isVowel(s.charAt(i))) {
                    count--;
                }

                i++;
            }

            j++;
        }

        return maxV;
    }
}

