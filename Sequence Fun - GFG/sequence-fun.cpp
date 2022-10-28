//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    const int mod=1e9+7;
	public:
		int NthTerm(int n){
		    // Code  here
		    vector<long long> dp(n+1,0);
		    dp[1]=2;
		    dp[2]=5;
		    for(long long i=3;i<=n;i++)
		    {
		        dp[i]=((i*dp[i-1])%mod+1)%mod;
		    }
		    return dp[n];
		}
        
};

// 2 5 16 65




//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends