//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    #define int long long
    const int mod=1e9+7;
    int dp[100001];
    int count(int n)
    {
        if(n<0)
        {
            return 0;
        }
        if(n==0)
        {
            return 1ll;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]=((count(n-1)+count(n-2))%mod+count(n-3))%mod;
    }
    long long countWays(int n)
    {
        // your code here
        memset(dp,-1,sizeof(dp));
        return count(n)%mod;
    }
    #undef int 
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends