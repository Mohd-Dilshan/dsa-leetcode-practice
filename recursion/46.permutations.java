class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> resultList = new ArrayList<>();

    backtrack(resultList, new ArrayList<>(), nums);
    return resultList;
    }
    private void backtrack(List<List<Integer>> resultList,
                         ArrayList<Integer> tempList, int[] nums) {
    // If we match the length, it is a permutation
    if (tempList.size() == nums.length) {
      resultList.add(new ArrayList<>(tempList));
      return;
    }

    for (int number : nums) {
      // Skip if we get same element
      if (tempList.contains(number))
        continue;

      // Add the new element
      tempList.add(number);

      // Go back to try other element
      backtrack(resultList, tempList, nums);

      // Remove the element
      tempList.remove(tempList.size() - 1);
    }
  }
}


//backtracking
//T.C=O(n*n!)
class Solution {
    
    List<List<Integer>> result = new ArrayList<>();
    Set<Integer> set = new HashSet<>();
    int n;

    void solve(List<Integer> temp, int[] nums) {

        if (temp.size() == n) {
            result.add(new ArrayList<>(temp));
            return;
        }

        for (int i = 0; i < n; i++) {

            if (!set.contains(nums[i])) {

                temp.add(nums[i]);
                set.add(nums[i]);

                solve(temp, nums);

                // Backtrack
                set.remove(nums[i]);
                temp.remove(temp.size() - 1);
            }
        }
    }

    public List<List<Integer>> permute(int[] nums) {
        n = nums.length;

        List<Integer> temp = new ArrayList<>();

        solve(temp, nums);

        return result;
    }
}
