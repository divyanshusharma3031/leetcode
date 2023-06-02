class UnionFind
{
 
public:
    unordered_map<int,int> parent;
    unordered_map<int,int> rank;
    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
 
    void join(int x, int y)
    {
        int X = find(x);
        int Y = find(y);
        if (X != Y)
        {
            if (rank[X] < rank[Y])
            {
                parent[X] = Y;
            }
            else if (rank[X] > rank[Y])
            {
                parent[Y] = X;
            }
            else
            {
                parent[X] = Y;
                rank[Y]++;
            }
        }
    }
};

class Solution {
public:
    void dfs(int node,vector<int> adj[],vector<int> &vis,int &ans)
    {
        if(vis[node])
        {
            return;
        }
        vis[node]=1;
        ans++;
        for(auto it:adj[node])
        {
            dfs(it,adj,vis,ans);
        }
        return;
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n=bombs.size();
        vector<int> adj[n+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    continue;
                }
                long long a=bombs[i][0]-bombs[j][0];
                long long b=bombs[i][1]-bombs[j][1];
                long long r=bombs[i][2];
                long long r1=r*r;
                long long dbc=(a)*(a)+b*b;
                r=bombs[j][2];
                long long r2=r*r;
                if(dbc<=r1)
                {
                    adj[i].push_back(j);
                }
            }
        }
        int count=1;
        for(int i=0;i<n;i++)
        {
            vector<int> vis(n,0);
            int ans=0;
            dfs(i,adj,vis,ans);
            count=max(ans,count);
        }
        return count;
    }
};
// [69,57,7];
// [65,59,3];