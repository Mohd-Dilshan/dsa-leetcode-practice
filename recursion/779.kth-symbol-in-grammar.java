//Time complexity: O(n)
//Space complexity: O(n)
//using recursion 
class Solution {
    public int kthGrammar(int n, int k) {
        if(n == 1 && k == 1) {
            return 0;
        }
        int mid = (int)Math.pow(2,n-1)/2;
        
        if (k <= mid) {
            return kthGrammar(n-1,k);
        } 
        return 1- kthGrammar(n-1,k-mid);
        
        
    }
}

//Time complexity: O(n)
//Space complexity: O(n)
//using recursion (left bit shit,bitwise calculation)

class Solution {
    public int kthGrammar(int n, int k) {
        if (n == 1 && k == 1) {
            return 0;
        }

        int mid = 1 << (n - 2);

        if (k <= mid) {
            return kthGrammar(n - 1, k);
        }

        return 1 - kthGrammar(n - 1, k - mid);
        
    }
}


//Time complexity: O(1)
//Space complexity: O(1)
// without recursion, constant time parity approach 

public int kthGrammar(int n, int k) {
    return Integer.bitCount(k - 1) % 2;
}
 