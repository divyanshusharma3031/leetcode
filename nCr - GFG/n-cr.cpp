// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    const int mod=1e9+7;
    vector<vector<int>> dp;
    int binomial(int n,int k)
    {
        if(k>n)
        {
            return 0;
        }
        if(k==0 || k==n)
        {
            return 1;
        }
        if(dp[n][k]!=-1)
        {
            return dp[n][k];
        }
        return dp[n][k]=(binomial(n-1,k-1)+binomial(n-1,k))%mod;
    }
    int nCr(int n, int r){
        // code here
        dp.resize(n+1,vector<int>(r+1,-1));
        return binomial(n,r);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}  // } Driver Code Ends