//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int n, string S, int X){
        // code here
        vector<int> dp(n,0);
        int mx=-1;
        for(int i=0;i<n;i++)
        {
            if(S[i]=='0')
            {
                if(mx>=i)
                {
                    dp[i]=1;
                }
            }
            else
            {
                dp[i]=1;
                mx=max(mx,i+X);
            }
        }
        reverse(S.begin(),S.end());
        mx=-1;
        for(int i=0;i<n;i++)
        {
            if(S[i]=='0')
            {
                if(mx>=i)
                {
                    dp[n-i-1]=1;
                }
            }
            else
            {
                // dp[i]=1;
                mx=max(mx,i+X);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(dp[i]==0)
            {
                // cout<<i<<" ";
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends