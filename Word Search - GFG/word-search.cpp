//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool b=false;
    int dp[101][101][101];
    bool solve(int i,int j,int k,vector<vector<char>> &board,vector<vector<int>> &vis,string &word)
    {
        int n=board.size();
        int m=board[0].size();
        int o=word.size();
        if(k==o)
        {
            b=true;
            return true;
        }
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || board[i][j]!=word[k])
        {
            return false;
        }
        if(dp[i][j][k]!=-1)
        {
            return dp[i][j][k];
        }
        vis[i][j]=1;
        bool b1=solve(i+1,j,k+1,board,vis,word);
        bool b2=solve(i-1,j,k+1,board,vis,word);
        bool b3=solve(i,j+1,k+1,board,vis,word);
        bool b4=solve(i,j-1,k+1,board,vis,word);
        return dp[i][j][k]=b1||b2||b3||b4;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int n=board.size();
        int m=board[0].size();
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0])
                {
                    
                    vector<vector<int>> vis(n,vector<int>(m,0));
                    if(solve(i,j,0,board,vis,word))
                    {
                        return true;
                    }
                }
            }
        }
        return b;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends