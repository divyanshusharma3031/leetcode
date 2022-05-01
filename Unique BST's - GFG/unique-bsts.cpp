// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

typedef long long ll;
class Solution
{
    public:
    //Function to return the total number of possible unique BST. 
    int numTrees(int n) 
    {
        vector<ll> dp(1100,0);
        
        dp[0]=1;
        
        dp[1]=1;
        
        dp[2]=2;
        
        const int mod=1e9+7;
        if(n<=2)
        {
            return dp[n];
        }
        
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                dp[i]=(dp[i]+dp[j]*dp[i-j-1])%mod;
                // cout<<j<<" "<<i-j<<"\n";
            }
        }
        
        return dp[n];
        
        return dp[n];
    }
};

// { Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	  // } Driver Code Ends