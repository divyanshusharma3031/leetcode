//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
long long dp[1002][1002];
long long dp1[101][1001][5];

class Solution{
    const int mod=1e9+7;
    public:
    long long power(long long a, long long b) {
        long long res = 1;
        while (b > 0) {
            if (b & 1)
                res = res * a;
            a = a * a;
            b >>= 1;
        }
        return res;
    }
    long long solve1(int i,vector<int> &v,int n,int x)
    {
        if(i==v.size())
        {
            return 0;
        }
        if(n<0)
        {
            return 0;
        }
        if(n==0)
        {
            return 1ll;
        }
        if(dp[i][n]!=-1)
        {
            return dp[i][n];
        }
        long long val=power(v[i],x);
        if(val>n)
        {
            return 0;
        }
        return dp[i][n]=(solve1(i+1,v,n-val,x)+solve1(i+1,v,n,x))%mod;
    }
    long long solve(int i,vector<int> &v,int n,int x)
    {
        if(i==v.size())
        {
            return 0;
        }
        if(n<0)
        {
            return 0;
        }
        if(n==0)
        {
            return 1ll;
        }
        if(dp1[i][n][x-1]!=-1)
        {
            return dp1[i][n][x-1];
        }
        long long val=power(v[i],x);
        if(val>n)
        {
            return 0;
        }
        return dp1[i][n][x-1]=(solve(i+1,v,n-val,x)+solve(i+1,v,n,x))%mod;
    }
    int numOfWays(int n, int x)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        memset(dp1,-1,sizeof(dp1));
        vector<int> v;
        for(int i=1;i<=n+1;i++)
        {
            v.push_back(i);
        }
        if(x==1)
        {
            return solve1(0,v,n,1);
        }
        return solve(0,v,n,x);
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends