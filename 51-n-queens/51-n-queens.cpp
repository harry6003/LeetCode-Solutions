class Solution {
public:
    
    void solve(int col,vector<vector<string>>& ans,vector<string> &board,int n,vector<int> &right, vector<int>& upper,vector<int> &down)
    {
        if(n == col)
        {
            ans.push_back(board);
            return ;
        }
        
        for(int row = 0;row<n;row++)
        {
            if(right[row] == 0 && upper[row+col] == 0 && down[(n-1) + col-row] == 0)
            {
                right[row] = 1;
                upper[row+col] = 1;
                down[(n-1) + col-row] = 1;
                board[row][col] = 'Q';
                solve(col+1,ans,board,n,right,upper,down);
                board[row][col] = '.';
                down[(n-1) + col-row] = 0;
                upper[row+col] = 0;
                right[row] = 0;
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i] = s;
        }
        vector<int> right(n,0);
        vector<int> upper(2*n-1,0);
        vector<int> down(2*n-1,0);
        
        solve(0,ans,board,n,right,upper,down);
        return ans;
        
    }
};