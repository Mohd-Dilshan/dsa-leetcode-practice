class Solution {
    private int gcd (int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    public int maxLength(int[] nums) {
        if(nums == null || nums.length == 0) return 0;
        int maxLen = Math.min(2, nums.length);
        for(int i =0 ; i<nums.length; i++) {
            for(int j = i+1; j< nums.length; j++) {
                boolean valid = true;
                for(int k = i; k<j; k++) {
                    if(gcd(nums[k], nums[j]) > 1) {
                        valid = false;
                        break;
                    }
                }
                if(valid) {
                    maxLen = Math.max(maxLen, j-i+1);
                } else {
                    break;
                }
            }
        }
        return maxLen;
    }
}