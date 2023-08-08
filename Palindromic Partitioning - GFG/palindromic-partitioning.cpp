//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int dp[2001];
    bool palindrome(string &s)
    {
        int lo=0;
        int hi=s.size()-1;
        while(lo<=hi)
        {
            if(s[lo]!=s[hi])
            {
                return false;
            }
            lo++;
            hi--;
        }
        return true;
    }
    int solve(int i,string &s)
    {
        int n=s.size();
        if(i>=(n))
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int ans=INT_MAX;
        string sub="";
        for(int idx=i;idx<n;idx++)
        {
            sub+=s[idx];
            if(palindrome(sub))
            {
                if((idx+1)!=n)
                    ans=min(ans,1+solve(idx+1,s));
                else
                {
                    ans=0;
                }
            }
            else
            {
                ans=min(ans,int(1e9));
            }
        }
        return dp[i]=ans;
    }
    int palindromicPartition(string s) {
        memset(dp,-1,sizeof(dp));
        return solve(0,s);
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends