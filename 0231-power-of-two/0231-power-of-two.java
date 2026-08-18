class Solution {
    public boolean isPowerOfTwo(int n) {
        //Aproach-1 
        // Time: O(log n) Space: O(1)
        // int x =0;
        // int power = n;
        // while(power>1) {
        //     power/=2;
        //     x++;
        // }
        // if(n==Math.pow(2,x)) {
        //     return true;
        // } else {
        //     return false;
        // }


        //Approch -2 (efficient) // Time: O(1) Space: O(1)
        if(n<=0) {
            return false;
        }
        n = n&(n-1);
        if(n==0) {
            return true;
        }
        else {
            return false;
        }
    }
}