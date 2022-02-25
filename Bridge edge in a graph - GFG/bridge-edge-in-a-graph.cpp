// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    vector<pair<int,int>> v;
    void dfs(int i,int parent,vector<int> adj[],vector<int> & t1,vector<int> &low,vector<int> & vis,int &timer)
    {
        vis[i]=1;
        t1[i]=low[i]=timer++;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto it:adj[i])
        {
            if(it==parent)
            {
                continue;
            }
            if(!vis[it])
            {
                dfs(it,i,adj,t1,low,vis,timer);
                low[i]=min(low[it],low[i]);
                if(low[it]>t1[i])
                {
                    if(i<it)
                    {
                        v.push_back({i,it});
                    }
                    else
                    {
                        v.push_back({it,i});
                    }
                }
               
        } else
                {
                    low[i]=min(low[i],t1[it]);
                }
            }
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        
        //check if c-d doesnt form a cycle
        
        int timer=0;
        
        vector<int> t1(V,-1);
        
        vector<int> low(V,-1);
        
        vector<int> vis(V,0);
        for(int i=0;i<V;i++)
        {
            dfs(i,-1,adj,t1,low,vis,timer);
        }
        if(c>d)
        {
            swap(c,d);
        }
        for(auto it:v)
        {
            // cout<<it.first<<" "<<it.second<<"\n";
            if(it.first==c && it.second==d)
            {
                return 1;
            }
        }
        return 0;
    }
};

// 9 12
// 0 2
// 1 4
// 1 5
// 2 3
// 2 4
// 4 5
// 3 0
// 6 3
// 6 7
// 7 8
// 8 6
// 8 2
// 3 6

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

  // } Driver Code Ends