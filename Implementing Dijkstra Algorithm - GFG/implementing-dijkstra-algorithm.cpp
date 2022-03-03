// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

typedef pair<int,int> pii;

class Solution
{
    public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> dist(V);
        int mx=1e9;
        for(int i=0;i<V;i++)
        {
            dist[i]=1e9;
        }
        dist[S]=0;
        priority_queue<pii,vector<pii>,greater<pii>> pq;
        pq.push({0,S});
        while(!pq.empty())
        {
            int u=pq.top().second;
            int wt=pq.top().first;
            pq.pop();
            
            for(auto it:adj[u])
            {
                if((dist[u]+it[1])<dist[it[0]])
                {
                   dist[it[0]]=dist[u]+it[1];
                    pq.push({dist[it[0]],it[0]});
                }
            }
        }
        return dist;
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
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends