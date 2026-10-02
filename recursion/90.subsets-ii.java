class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> list = new ArrayList<>();
        Arrays.sort(nums);
        solve(nums, 0, list, ans);
        return ans;
    }

    public void solve(int[] nums, int idx, List<Integer> list,
                      List<List<Integer>> ans) {
        if (idx == nums.length) {
            ans.add(new ArrayList<>(list));
            return;
        }
        list.add(nums[idx]);
        solve(nums, idx + 1, list, ans);
        list.remove(list.size() - 1);
        int next = idx+1;
while(next<nums.length && nums[idx]==nums[next]){
            next+=1;
        }
        

        solve(nums,next, list, ans);
    }
}




//second attempt 
class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
    List<List<Integer>> resultList= new ArrayList<>();
    Arrays.sort(nums);
    
    backtrack(resultList,new ArrayList<>(),nums,0);
    
    return resultList;
    
    }
    
    private void backtrack(List<List<Integer>>resultSets,List <Integer>tempSet,int [] nums, int start){
        if(resultSets.contains(tempSet)) {
            return;
        }
        resultSets.add(new ArrayList<>(tempSet));
        
        
      for (int i=start; i<nums.length; i++){
            tempSet.add(nums[i]);
            backtrack(resultSets,tempSet,nums, i+1);
            
         tempSet.remove(tempSet.size()-1);
        }
        
    }
}
