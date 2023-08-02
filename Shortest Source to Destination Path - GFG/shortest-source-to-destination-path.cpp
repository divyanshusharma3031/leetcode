//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int dir[4][4]={{-1,0},{1,0},{0,1},{0,-1}};
  
    int shortestDistance(int N, int M, vector<vector<int>> arr, int X, int Y) {
        // code here
        queue<array<int,3>> q;
        if(arr[0][0]==0)
        {
            return -1;
        }
        q.push({0,0,0});
        vector<vector<int>> vis(N,vector<int>(M,0));
        vis[0][0]=1;
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int i=it[0];
            int j=it[1];
            int c=it[2];
            if(i==(X) && j==(Y))
            {
                return c;
            }
            for(auto it:dir)
            {
                int nx=i+it[0];
                int ny=j+it[1];
                if(nx>=0 && ny>=0 && nx<N && ny<M && vis[nx][ny]==0 && arr[nx][ny]==1)
                {
                    q.push({nx,ny,c+1});
                    vis[nx][ny]=1;
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends