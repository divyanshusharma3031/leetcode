// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
int solve(vector<vector<int>> &cost,int i,int depth,vector<vector<int>> &dp,vector<bool> &visited)
{
    int n=cost.size();
    if(depth==cost.size())
    {
        return cost[i][0];
    }
    if(dp[i][depth]!=-1)
    {
        return dp[i][depth];
    }
    visited[i]=true;
    int ans=INT_MAX;
    for(int j=0;j<n;j++)
    {
        if(!visited[j])
        {
            visited[j]=true;
            ans=min(ans,cost[i][j]+solve(cost,j,depth+1,dp,visited));
            visited[j]=false;
        }
    }
    visited[i]=false;
    return ans;
}
int total_cost(vector<vector<int>>cost){
    // Code here
    vector<vector<int>> dp(cost.size()+1,vector<int>(cost.size()+1,-1));
    vector<bool> visited(cost.size(),false);
    return solve(cost,0,1,dp,visited);
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>cost(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)cin >> cost[i][j];
		Solution obj;
		int ans = obj.total_cost(cost);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends