//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int dp[100001];
    const int mod=1e8;
    long long solve(int N)
    {
        if(N<0)
        {
            return 0;
        }
        if(N==0)
        {
            return 1;
        }
        if(dp[N]!=-1)
        {
            return dp[N];
        }
        return dp[N]=(solve(N-2)%mod+solve(N-1)%mod)%mod;
    }
    int fillingBucket(int N) {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(N)%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends