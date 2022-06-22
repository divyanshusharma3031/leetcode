// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	    const int mod=1e9+7;
	    int ways(long long i,long long n,vector<int> &dp)
	    {
	        if(i==n)
	        {
	            return 1;
	        }
	        if(i>n)
	        {
	            return 0;
	        }
	        if(dp[i]!=-1)
	        {
	            return dp[i];
	        }
	        return dp[i]=(ways(i+1,n,dp)+ways(i+2,n,dp))%mod;
	    }
		int nthPoint(int n){
		    // Code here
		    vector<int> dp(n+1,-1);
		    long long i=0;
		    return ways(i,n,dp);
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends