class Solution {
    public boolean isSafe(int row , int col , char[][] board , int n){
        for(int i=0;i<row;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        for(int i=row-1 , j=col-1  ; j>=0 && i>=0 ; i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }
public void solve(int row , int n , char[][] board , List<List<String>>res){
    if(row==n){
        List<String>sol = new ArrayList<>();
        for(int i=0;i<n;i++){
            sol.add(new String(board[i]));
        }
        res.add(sol);
        return;
    }

    for(int j=0;j<n;j++){
        if(isSafe(row , j , board , n)){
            board[row][j]='Q';
            solve(row+1 , n, board , res);
            board[row][j] = '.';
        }
    }
}

    public List<List<String>> solveNQueens(int n) {
        List<List<String>>res = new ArrayList<>();
 char[][] board = new char[n][n];
     for(int i=0;i<n;i++){
        Arrays.fill(board[i],'.');
     }

     solve(0,n,board,res);
     return res;
        
    }
}