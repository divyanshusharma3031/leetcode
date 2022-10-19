//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    bool b=false;
    public:
    void check(int v,vector<int> adj[],unordered_set<int> &s,int N)
    {
        s.insert(v);
        // cout<<s.size()<<" ";
        if(s.size()==N)
        {
            // cout<<s.size()<<" ";
            b=true;
        }
        for(auto it:adj[v])
        {
            if(s.find(it)==s.end())
            {
                 check(it,adj,s,N);
            }
           
        }
        s.erase(v);
        return ;
    }
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        // code here
        
        vector<int> adj[11];
        for(int i=0;i<Edges.size();i++)
        {
            adj[Edges[i][0]].push_back(Edges[i][1]);
            adj[Edges[i][1]].push_back(Edges[i][0]);
        }
        for(int i=1;i<=10;i++)
        {
            unordered_set<int> s;
            if(adj[i].size()>0)
                check(i,adj,s,N);
        }
            
        return b;
    }
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends