//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    long long dp[10001][27];
	    const int mod=1e9+7;
	    long long count(int i,string &s,int num)
	    {
	        int n=s.size();
	        if(i==n)
	        {
	            if(num==0 || num>26)
	            {
	                return 0;
	            }
	            return 1;
	        }
	        int x=num*10+s[i]-'0';
	        if(dp[i][num]!=-1)
	        {
	            return dp[i][num];
	        }
	        if(x>26)
	        {
	            return 0;
	        }
	        if(x<=0)
	        {
	            return 0;
	        }
	        return dp[i][num]=((count(i+1,s,x))%mod+(count(i+1,s,0))%mod)%mod;
	    }
		int CountWays(string str){
		    // Code here
		    memset(dp,-1,sizeof(dp));
		    return count(0,str,0);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends