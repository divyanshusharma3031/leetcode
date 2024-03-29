//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
const int mod=1e9+7;
class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    int n=s.size();
	    vector<long long> last(26,-1);
	    vector<long long> dp(n+1,0);
	    dp[0]=1;
	    for(int i=1;i<=n;i++)
	    {
	        if((last[s[i-1]-'a'])==-1)
	        {
	            dp[i]=(dp[i-1]*2ll)%mod;
	           // cout<<dp[i]<<" ";
	        }
	        else
	        {
	            dp[i]=((2ll)*dp[i-1]-dp[last[s[i-1]-'a']]+mod)%mod;
	        }
	        last[s[i-1]-'a']=i-1;
	        
	    }
	   // cout<<"\n";
	    return dp[n];
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends