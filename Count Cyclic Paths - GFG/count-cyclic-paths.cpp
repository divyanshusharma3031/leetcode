//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++


//User function Template for C++
long long dp[1000001]={0};
class Solution{   
public:
    const int mod=1e9+7;
    long long binpow(long long a, long long b, long long m=1e9+7) {
        a %= m;
        long long res = 1;
        while (b > 0) {
            if (b & 1)
                res = res * a % m;
            a = a * a % m;
            b >>= 1;
        }
        return res;
    }
    int countPaths(int N){
        if(N<=1)
        {
            return 0;
        }
        long long ans=0;
        long long prev=3;
        if(N==2)
        {
            return prev;
        }
        if(dp[N]!=0)
        {
            return dp[N];
        }
        for(int i=3;i<=N;i++)
        {
            ans=(binpow(3,i-1)-prev+mod)%mod;
            dp[i]=ans;
            prev=ans;
        }
        return dp[N]=ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends