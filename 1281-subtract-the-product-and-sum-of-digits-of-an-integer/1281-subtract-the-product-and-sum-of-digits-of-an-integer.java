class Solution {
    public int subtractProductAndSum(int n) {
        int last_digit = 0;
        int count =1;
        int count_2 = 0;
        while (n>0) {
            last_digit = n%10;
            count = count*last_digit;
            count_2 = count_2+last_digit;
            n=n/10;
        }
        return count-count_2;
    }
}