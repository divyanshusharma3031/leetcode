// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

typedef pair<int,int> pii;
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int> parent(V,-1);
        
        vector<int> dist(V);
        
        dist[0]=0;
        
        for(int i=0;i<V;i++)
        {
            dist[i]=INT_MAX;
        }
        
        vector<bool> mst(V,false);
        
        dist[0]=0;
        parent[0]=-1;
        
        priority_queue<pii,vector<pii>,greater<pii>> pq;
        
        pq.push({0,0});
        
        while(!pq.empty())
        {
            int u=pq.top().second;
            int wt=pq.top().first;
            
            pq.pop();
            
            mst[u]=true;
            for(auto it:adj[u])
            {
                int wt=it[1];
                if(mst[it[0]]==false && wt<dist[it[0]])
                {
                    // cout<<wt<<"\n";
                    dist[it[0]]=wt;
                    pq.push({wt,it[0]});
                    parent[it[0]]=u;
                }
            }
        }
        long long ans=0;
        
        for(int i:dist)
        {
            ans+=i;
            // cout<<i<<"\n";
        }
        
        return ans;
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends