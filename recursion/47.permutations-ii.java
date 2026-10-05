//T.C=O(n!*n)
//S.C=O(n)
class Solution {
    private int n;
    private List<List<Integer>> result;

    private void backtrack(List<Integer> temp, Map<Integer, Integer> mp) {
        if (temp.size() == n) {
            result.add(new ArrayList<>(temp));
            return;
        }

        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            int num = entry.getKey();
            int count = entry.getValue();

            if (count == 0) {
                continue;
            }

            // Do something
            temp.add(num);
            mp.put(num, count - 1);

            // Explore
            backtrack(temp, mp);

            // Undo
            temp.remove(temp.size() - 1);
            mp.put(num, count);
        }
    }

    public List<List<Integer>> permuteUnique(int[] nums) {
        n = nums.length;
        result = new ArrayList<>();

        Map<Integer, Integer> mp = new HashMap<>();
        for (int num : nums) {
            mp.put(num, mp.getOrDefault(num, 0) + 1);
        }

        List<Integer> temp = new ArrayList<>();
        backtrack(temp, mp);

        return result;
    }
}



//Approach 2
class Solution {
    private List<List<Integer>> result;
    private int n;
    
    private void solve(int idx, int[] nums) {
        if (idx == n) {
            List<Integer> permutation = new ArrayList<>();
            for (int num : nums) {
                permutation.add(num);
            }
            result.add(permutation);
            return;
        }

        Set<Integer> uniqueSet = new HashSet<>();
        for (int i = idx; i < n; i++) {

            if (uniqueSet.contains(nums[i])) {
                continue;
            }

            uniqueSet.add(nums[i]);

            swap(nums, i, idx);

            solve(idx + 1, nums);

            swap(nums, i, idx);
        }
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    public List<List<Integer>> permuteUnique(int[] nums) {
        n = nums.length;
        
        result = new ArrayList<>();

        solve(0, nums);

        return result;
    }

}