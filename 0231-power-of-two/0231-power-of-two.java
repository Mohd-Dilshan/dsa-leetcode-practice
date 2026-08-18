class Solution {
    public boolean isPowerOfTwo(int n) {
        int x =0;
        int power = n;
        while(power>1) {
            power/=2;
            x++;
        }
        if(n==Math.pow(2,x)) {
            return true;
        } else {
            return false;
        }
    }
}