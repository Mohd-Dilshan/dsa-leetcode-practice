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
       

//using recursion 
T.C=O(n)
class Solution {
    
    int findWinnerIdx(int n , int k){
        
        if (n==0) {
            return 0;
        }
        int idx = findWinnerIdx(n-1,k);
        
        idx = (idx+k)%n;
       
       return idx;

    }
    
    public int findTheWinner(int n, int k) {
        int resultidx = findWinnerIdx(n,k);
        
        return  resultidx+1;
    }
}
        

        