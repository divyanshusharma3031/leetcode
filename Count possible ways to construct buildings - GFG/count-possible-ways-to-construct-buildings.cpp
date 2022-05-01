// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    const int mod=1e9+7;
	    
	    vector<long long> dp(N+1,0);
	    
	    dp[0]=2;
	    
	    dp[1]=3;
	    
	    for(int i=2;i<=N;i++)
	    {
	        dp[i]=(dp[i-1]%mod+dp[i-2]%mod)%mod;
	    }
	    
	    return ((dp[N-1]%mod)*(dp[N-1]%mod))%mod;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends