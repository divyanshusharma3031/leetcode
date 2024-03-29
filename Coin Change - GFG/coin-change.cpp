//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int dp[1001][1001];
    long long int solve(int *count,int i,int N,int sum)
    {
        if(sum<0)
        {
            return 0;
        }
        if(sum==0)
        {
            return 1;
        }
        if(i>=N)
        {
            return 0;
        }
        if(dp[i][sum]!=-1)
        {
            return dp[i][sum];
        }
        return dp[i][sum]=solve(count,i,N,sum-count[i])+solve(count,i+1,N,sum);
    }
    long long int count(int coins[], int N, int sum) {
        memset(dp,-1,sizeof(dp));
        return solve(coins,0,N,sum);
        // code here.
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends