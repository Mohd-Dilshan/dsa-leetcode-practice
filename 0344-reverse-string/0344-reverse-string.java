class Solution {
    public void reverseString(char[] s) {
        int i = 0;
        int j = s.length-1;
        while(i<j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
}

//approach 2 using recursion 
class Solution {
    public static void f(char[] s, int idx) {
        int left = idx;
        int right = s.length - 1 - idx;
       
        if (left >= right) return;
   
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        f(s, idx + 1);
    }
    
    public void reverseString(char[] s) {
        f(s, 0);
    }
}

