//Brute force ;
//T.C=O(n²)
class Solution {
    public int findTheWinner(int n, int k) {
        List<Integer> arr = new ArrayList<>();
        
        for (int i =1; i<=n; i++){
            arr.add(i);
        }
        int i =0;
        
        while (arr.size()>1) {
            int idx = (i + k - 1) % arr.size();
            arr.remove(idx);
            i = idx;
        }

        return arr.get(0);
    }
}

//using queue 
//T.C=O(n*k)
class Solution {
    public int findTheWinner(int n, int k) {
        Queue<Integer>que = new LinkedList<>();
        for (int i =1; i<=n;i++){
            que.add(i);
            
        }
        while(que.size()>1){
           for( int count =1; count<=k-1;count++){
               que.add(que.poll());
               }
               que.poll();
        }
        return que.peek();
    }
    
}
        
        

        