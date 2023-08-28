//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution
{
public:
    void dfs(int node,int vis[],stack<int> &s , vector<pair<int,int>> adj[]){
        vis[node]=1;
        
        
        for(auto c:adj[node]){
            if(!vis[c.first]){
                dfs(c.first,vis,s,adj);
            }
            
        }
        s.push(node);
        
    }
    vector<int> maximumDistance(vector<vector<int>> edges, int v, int e, int src)
    {
        // code here
        vector<pair<int, int>> adj[v + 1];
        for (auto it : edges)
        {
            adj[it[0]].push_back({it[1], it[2]});
        }
        int vis[v]={0};
	    stack<int> s;
	    for(int i=0;i<v;i++){
	        if(vis[i]==0)
	        dfs(i,vis,s,adj);
	    }
        vector<int> dist(v,INT_MIN);
        dist[src]=0;
        while(s.size())
        {
            int ele=s.top();
            s.pop();
            if(dist[ele]!=(INT_MIN))
            {
                for(auto it:adj[ele])
                {
                    if(dist[it.first]<(dist[ele]+it.second))
                    {
                        dist[it.first]=dist[ele]+it.second;
                    }
                }
            }
        }
        return dist;
    }
};



//{ Driver Code Starts.

int main() {
  
    int t;
    cin>>t;
    while(t--)
    {

        int v,e;
        cin>>v>>e;
     
        int src;
        cin>>src;
        vector<vector<int>> edges(e,vector<int> (3));
        for(auto &j:edges)
          cin>>j[0]>>j[1]>>j[2];

        Solution s;
        vector <int> ans=s.maximumDistance(edges,v,e,src);
        for(auto j:ans)
        {
            if(j==INT_MIN)
              cout<<"INF ";
            else
              cout<<j<<" ";
        }
        cout<<endl;
    } 
    return 0;
 
}
// } Driver Code Ends