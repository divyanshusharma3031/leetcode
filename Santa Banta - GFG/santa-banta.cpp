//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

bool isprime[10000005];
vector<int> prime;
class Solution
{
public:
    void precompute()
    {
        for (int i = 3; i <= 10000; i += 2)
        {
            if (isprime[i] == 0)
            {
                for (int j = i * i; j <= 10000000; j += i + i)
                {

                    isprime[j] = 1;
                }
            }
        }
        prime.push_back(2);
        for (int i = 3; i <= 10000000; i += 2)
            if (isprime[i] == 0)
                prime.push_back(i);
        return;
    }
    void dfs(int node, vector<int> adj[], vector<int> &vis, int &c)
    {
        if (vis[node])
        {
            return;
        }
        vis[node] = 1;
        c += 1;
        for (auto it : adj[node])
        {
            dfs(it, adj, vis, c);
        }
        return;
    }
    int helpSanta(int n, int m, vector<vector<int>> &g)
    {
        // Code here
        vector<int> adj[n + 1];
        for (int i = 0; i < g.size(); i++)
        {
            for (auto it : g[i])
            {
                adj[i].push_back(it);
            }
        }
        vector<int> vis(n + 1, 0);
        int mx = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                int c = 0;
                dfs(i, adj, vis, c);
                mx = max(mx, c);
            }
        }
        if(mx==1)
        {
            return -1;
        }
        return prime[mx - 1];
    }
};




//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends