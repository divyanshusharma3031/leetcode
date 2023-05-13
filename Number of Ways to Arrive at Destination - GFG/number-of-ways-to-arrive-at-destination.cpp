//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

// User function Template for C++

class Solution {
  public:
  const int mod=1e9+7;
  typedef pair<long long,long long> pi;
  vector<long long> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<long long> ans(V,1e18);
        priority_queue<pi,vector<pi>,greater<pi>> pq;
        pq.push({0,S});
        ans[S]=0;
        while(!pq.empty())
        {
            auto p=pq.top();
            pq.pop();
            int node=p.second;
            int dist=p.first;
            for(auto it:adj[node])
            {
                if((ans[node]+it[1])<ans[it[0]])
                {
                    ans[it[0]]=ans[node]+it[1];
                    pq.push({ans[it[0]],it[0]});
                }
            }
        }
        return ans;
    }
//   node ,weight
    int countPaths(int n, vector<vector<int>>& roads) {
        // code here
        vector<vector<int>> adj[n+1];
        for(auto it:roads)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        vector<long long> target=dijkstra(n,adj,0);
        int c=1;
        vector<long long> ways(n,0);
        ways[0]=1;
        vector<long long> ans(n,INT_MAX);
        priority_queue<pi,vector<pi>,greater<pi>> pq;
        pq.push({0,0});
        ans[0]=0;
        while(!pq.empty())
        {
            auto p=pq.top();
            pq.pop();
            int node=p.second;
            int dist=p.first;
            for(auto it:adj[node])
            {
                if((ans[node]+it[1])<ans[it[0]])
                {
                    ans[it[0]]=ans[node]+it[1];
                    pq.push({ans[it[0]],it[0]});
                    if(target[it[0]]==ans[it[0]])
                        ways[it[0]]=(ways[it[0]]+ways[node])%mod;
                }
                else if((ans[node]+it[1])==(target[it[0]]))
                {
                    ways[it[0]]=(ways[node]+ways[it[0]])%mod;
                }
            }
        }
        return ways[n-1];
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends