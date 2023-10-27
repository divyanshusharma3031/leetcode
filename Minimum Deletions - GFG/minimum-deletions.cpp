//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int dp[1001][1001];
    int lps(int i,int j,string &s,string &t)
    {
        int n=s.size();
        if(i==n || j==n)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(s[i]==t[j])
        {
            return dp[i][j]=1+lps(i+1,j+1,s,t);
        }
        return dp[i][j]=max(lps(i+1,j,s,t),lps(i,j+1,s,t));
    }
    int minimumNumberOfDeletions(string S) { 
        // code here
        memset(dp,-1,sizeof(dp));
        string t=S;
        int n=S.size();
        reverse(t.begin(),t.end());
        return n-lps(0,0,S,t);
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends