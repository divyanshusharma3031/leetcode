//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    int timer=0;
    set<int> s;
    void dfs(int node,int parent,vector<int> adj[],vector<int> &vis,vector<int>&low,vector<int> &time)
    {
        vis[node]=1;
        time[node]=low[node]=timer;
        timer++;
        int child=0;
        for(auto it:adj[node])
        {
            if(it==parent)
            {
                continue;
            }
            if(vis[it]==0)
            {
                dfs(it,node,adj,vis,low,time);
                low[node]=min(low[it],low[node]);
                if(low[it]>=time[node] && (parent!=-1))
                {
                    s.insert(node);
                }
                child++;
            }
            else
            {
                low[node]=min(low[it],low[node]);
            }
        }
        if(child>1 && parent==-1)
        {
            s.insert(node);
        }
    }
    int doctorStrange(int N, int M, vector<vector<int>> & graph)
    {
         //Write your code here
         // tarjan's algorithm
         vector<int> adj[N+1];
         for(int i=0;i<M;i++)
         {
             adj[graph[i][0]].push_back(graph[i][1]);
             adj[graph[i][1]].push_back(graph[i][0]);
         }
         vector<int> vis(N+1,0);
         vector<int> low(N+1,1e9);
         vector<int> time(N+1,1e9);
         for(int i=1;i<=N;i++)
         {
             if(!vis[i])
             {
                 dfs(i,-1,adj,vis,low,time);
             }
         }
        
        //  for(auto it:s)
        //  {
        //      cout<<it<<" ";
        //  }
         return s.size();
    }
};


//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        cin>>n>>m;
        vector<vector<int>> g(n+1);
        for(i=0;i<m;i++)
        {
            int a,b;cin>>a>>b;
            g[i].push_back(a);
            g[i].push_back(b);
        }
        Solution ob;
        int ans = ob.doctorStrange(n, m, g);
        cout<<ans<<endl;
    }
	return 0;
}
// } Driver Code Ends