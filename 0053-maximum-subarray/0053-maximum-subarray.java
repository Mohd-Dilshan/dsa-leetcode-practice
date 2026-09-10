class Solution {
    public int maxSubArray(int[] nums) {
        int maxSum = nums[0];
        int currentMax = nums[0];
        for (int i = 1; i<nums.length; i++) {
            currentMax =Math.max(nums[i], nums[i] + currentMax);
            maxSum = Math.max(currentMax, maxSum);
        }
        return maxSum;
    }
}


//kadane's algo
class Solution {
    public int maxSubArray(int[] nums) {
        int sum=0;
        int maxSum=Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            maxSum=Math.max(sum,maxSum);
            if(sum<0){
                sum=0;
            }
        }
        return maxSum;
    }
}