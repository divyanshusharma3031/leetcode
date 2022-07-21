class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>& board,vector<vector<int>> &matrix,vector<vector<int>> &vis)
    {
        int n=board.size();
        int m=board[0].size();
        if(i<0 || j<0 || i>=n || j>=m || board[i][j]=='X' || vis[i][j])
        {
            return;
        }
        vis[i][j]=1;
        matrix[i][j]=0;
        dfs(i-1,j,board,matrix,vis);
        dfs(i+1,j,board,matrix,vis);
        dfs(i,j-1,board,matrix,vis);
        dfs(i,j+1,board,matrix,vis);
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> matrix(n,vector<int>(m,1));
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            if(board[0][i]=='O')
            {
                dfs(0,i,board,matrix,vis);
            }
        }
        for(int i=0;i<m;i++)
        {
            if(board[n-1][i]=='O')
            {
                dfs(n-1,i,board,matrix,vis);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(board[i][0]=='O')
            {
                dfs(i,0,board,matrix,vis);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(board[i][m-1]=='O')
            {
                dfs(i,m-1,board,matrix,vis);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j])
                {
                    board[i][j]='X';
                }
                else
                {
                    board[i][j]='O';
                }
            }
        }
        return;
    }
};