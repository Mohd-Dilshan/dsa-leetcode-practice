// class Solution {
//     private int gcd (int a, int b) {
//         if (b == 0) {
//             return a;
//         }
//         return gcd(b, a % b);
//     }
//     public int maxLength(int[] nums) {
//         if(nums == null || nums.length == 0) return 0;
//         int maxLen = Math.min(2, nums.length);
//         for(int i =0 ; i<nums.length; i++) {
//             for(int j = i+1; j< nums.length; j++) {
//                 boolean valid = true;
//                 for(int k = i; k<j; k++) {
//                     if(gcd(nums[k], nums[j]) > 1) {
//                         valid = false;
//                         break;
//                     }
//                 }
//                 if(valid) {
//                     maxLen = Math.max(maxLen, j-i+1);
//                 } else {
//                     break;
//                 }
//             }
//         }
//         return maxLen;
//     }
// }


class Solution {
    public int maxLength(int[] nums) {
        int left = 0;
        int usedMask = 0;
        int maxLen = Math.min(2, nums.length);
        int[] primes = {2, 3, 5, 7};

        for (int right = 0; right < nums.length; right++) {
            int mask = 0;

            for (int bit = 0; bit < 4; bit++) {
                if (nums[right] % primes[bit] == 0) {
                    mask |= (1 << bit);
                }
            }

            while ((usedMask & mask) != 0) {
                int oldMask = 0;

                for (int bit = 0; bit < 4; bit++) {
                    if (nums[left] % primes[bit] == 0) {
                        oldMask |= (1 << bit);
                    }
                }

                usedMask ^= oldMask;
                left++;
            }

            usedMask |= mask;
            maxLen = Math.max(maxLen, right - left + 1);
        }

        return maxLen;
    }
}



