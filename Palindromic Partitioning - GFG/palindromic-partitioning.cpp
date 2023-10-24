//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[501];
    bool palindrome(string &str)
    {
        int i=0;
        int j=str.size()-1;
        while(i<=j)
        {
            if(str[i]==str[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    int solve(int i,string &s)
    {
        int n=s.size();
        if(i>=n)
        {
            return 0;
        }
        int ans=1e9;
        string str="";
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        for(int idx=i;idx<n;idx++)
        {
            str+=s[idx];
            if(palindrome(str))
            {
                ans=min(ans,1+solve(idx+1,s));
            }
        }
        return dp[i]=ans;
    }
    int palindromicPartition(string str)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(0,str)-1;
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