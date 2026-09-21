//T.C: O(n+m)

class Solution {
    public String buildString(String s) {
        int n = s.length();
        StringBuilder temp = new StringBuilder();
        
        int i = 0;
        while (i < n) {
            if (s.charAt(i) != '#') {
                temp.append(s.charAt(i));
            } else if (temp.length() > 0) {
                temp.deleteCharAt(temp.length() - 1);
            }
            i++;
        }
        
        return temp.toString();
    }
    
    public boolean backspaceCompare(String s, String t) {
        return buildString(s).equals(buildString(t));
    }
}




***********************JAVA*************************
class Solution {
    public boolean backspaceCompare(String s, String t) {
        
int i = s.length() - 1, j = t.length() - 1;

int skipS = 0, skipT = 0;
        
        while (i >= 0 || j >= 0) {
            while (i >= 0) {
                if (s.charAt(i) == '#') {
                    skipS++;
                    i--;
                } else if (skipS > 0) {
                    skipS--;
                    i--;
                } else {
                    break;
                }
            }
            
            while (j >= 0) {
                if (t.charAt(j) == '#') {
                    skipT++;
                    j--;
                } else if (skipT > 0) {
                    skipT--;
                    j--;
                } else {
                    break;
                }
            }
            
 char first = (i < 0) ? '$' : s.charAt(i);
 char second = (j < 0) ? '$' : t.charAt(j);
            
            if (first != second) {
                return false;
            }
            
            i--;
            j--;
        }
        
        return true;
    }
}


//using StringBuilder 
class Solution {
    public boolean backspaceCompare(String s, String t) {

StringBuilder a = new StringBuilder();
StringBuilder b = new StringBuilder();

        for (int i=0;i<s.length();i++) {
            if (s.charAt(i) == '#') {
              if (a.length() > 0){         a.deleteCharAt(a.length() - 1);
                }
            } else {
                a.append(s.charAt(i));
            }
        }
        for (int i=0;i<t.length();i++){
            if (t.charAt(i) == '#') {
                if (b.length() > 0) {
          b.deleteCharAt(b.length() - 1);
                }
            } else {
                b.append(t.charAt(i));
            }
        }

 return a.toString().equals(b.toString());
    }
}