//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    const int mod=1e3+3;
    int dp[201][201][2];
    int count(int i,int j,bool isTrue,string s)
    {
        if(i==j)
        {
            if(s[i]=='T')
            {
                return isTrue;
            }
            return !(isTrue);
        }
        if(dp[i][j][isTrue]!=-1)
        {
            return dp[i][j][isTrue];
        }
        int ans=0;
        for(int k=i;k<j;k+=1)
        {
            if(s[k]=='|')
            {
                int lt=count(i,k-1,true,s);
                int lf=count(i,k-1,false,s);
                int rt=count(k+1,j,true,s);
                int rf=count(k+1,j,false,s);
                if(isTrue)
                    ans=(ans+lt*(rt+rf)+rt*(lf))%mod;
                else
                {
                    ans=(ans+(rf*lf)%mod)%mod;
                }
            }
            else if(s[k]=='^')
            {
                int lt=count(i,k-1,true,s);
                int lf=count(i,k-1,false,s);
                int rt=count(k+1,j,true,s);
                int rf=count(k+1,j,false,s);
                if(isTrue)
                    ans=(ans+(lt*rf)%mod+(lf*rt)%mod)%mod;
                else
                {
                    ans=(ans+(lt*rt)%mod+(lf*rf)%mod)%mod;
                }
            }
            else if(s[k]=='&')
            {
                int lt=count(i,k-1,true,s);
                int lf=count(i,k-1,false,s);
                int rt=count(k+1,j,true,s);
                int rf=count(k+1,j,false,s);
                if(isTrue)
                    ans=(ans+(lt*rt)%mod)%mod;
                else
                {
                    ans=(ans+(lt*rf)%mod+(lf*rf)%mod+(lf*rt)%mod)%mod;
                }
            }
        }
        return dp[i][j][isTrue]=ans%mod;
    }
    int countWays(int N, string S){
        // code here
        int n=S.size()-1;
        memset(dp,-1,sizeof(dp));
        return count(0,n,true,S);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends