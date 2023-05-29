//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class UnionFind {
public:
    unordered_map<int,int> parent;
    unordered_map<int,int> rank;
    UnionFind() {
        
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void join(int x, int y) {
        int X = find(x);
        int Y = find(y);

        if (X != Y) {
            if (rank[X] < rank[Y]) {
                parent[X] = Y;
            } else if (rank[X] > rank[Y]) {
                parent[Y] = X;
            } else {
                parent[Y] = X;
                rank[X]++;
            }
        }
    }
};

class Solution {
  public:
  int c=0;
    void dfs(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &vis,UnionFind &d,int join)
    {
        int m=grid[0].size();
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || vis[i][j] || grid[i][j]==0)
        {
            return;
        }
        vis[i][j]=1;
        c++;
        d.join(join,i*m+j);
        dfs(i+1,j,grid,vis,d,join);
        dfs(i-1,j,grid,vis,d,join);
        dfs(i,j+1,grid,vis,d,join);
        dfs(i,j-1,grid,vis,d,join);
    }
    int MaxConnection(vector<vector<int>>& grid) {
        // code here
        UnionFind d;
        int n=grid.size();
        int m=grid[0].size();
        unordered_map<int,int> group;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                d.parent[i*m+j]=i*m+j;
            }
        }
        vector<vector<int>> vis(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] && !vis[i][j])
                {
                    c=0;
                    dfs(i,j,grid,vis,d,i*m+j);
                    group[i*m+j]=c;
                    ans=max(ans,c);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    set<int> s;
                    if((i-1)>=0)
                    {
                        s.insert(d.find((i-1)*m +j));
                    }
                    if((i+1)<n)
                    {
                        s.insert(d.find((i+1)*m+j));
                    }
                    if((j-1)>=0)
                    {
                        s.insert(d.find(i*m+j-1));
                    }
                    if((j+1)<m)
                    {
                        s.insert(d.find(i*m+j+1));
                    }
                    int count=0;
                    for(auto it:s)
                    {
                        count=count+group[it];
                    }
                    ans=max(ans,count+1);
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        Solution obj;
        cout<<obj.MaxConnection(grid)<<"\n";
    }
}

// } Driver Code Ends