// class Solution {
//     public int numOfSubarrays(int[] arr) {
//         int n = arr.length;
//         int count = 0;
//         int M = (int)1e9 + 7;
        
//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < n; j++) {
//                 int sum = 0;
//                 for (int k = i; k <= j; k++) {
//                     sum += arr[k];
//                 }
//                 if (sum % 2 != 0) {
//                     count++;
//                 }
//             }
//         }
        
//         return count % M;
//     }
// }

// class Solution {
//     public int numOfSubarrays(int[] arr) {
//         int n = arr.length;
//         int count = 0;
//         int M = (int)1e9 + 7;
        
//         for (int i = 0; i < n; i++) {
//             int sum = 0;
//             for (int j = i; j < n; j++) {
//                 sum += arr[j];
//                 if (sum % 2 != 0) {
//                     count = (count + 1) % M;
//                 }
//             }
//         }
        
//         return count % M;
//     }
// }

//T.C : O(n)
//S.C : O(n)
class Solution {
    public int numOfSubarrays(int[] arr) {
        int n = arr.length;
        int M = (int)1e9 + 7;

        int[] prefix = new int[n];
        prefix[0] = arr[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + arr[i];
        }

        int count = 0;
        int odd = 0;
        int even = 1;

        for (int i = 0; i < n; i++) {
            if (prefix[i] % 2 == 0) { // odd + even = odd
                count = (count + odd) % M;
                even++;
            } else { // even + odd = odd
                count = (count + even) % M;
                odd++;
            }
        }

        return count;
    }
}