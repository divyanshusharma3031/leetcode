//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

const int mod=1e9+7;
class Solution{
    
	public:
	vector<vector<long long>> dp;
	long long sz=0;
	long long int power(long long x, long long y, int p=1e9+7)
    {
     
        // Initialize answer
        int res = 1;
     
        // Check till the number becomes zero
        while (y > 0) {
     
            // If y is odd, multiply x with result
            if (y % 2 == 1)
                res = (res * x);
     
            // y = y/2
            y = y >> 1;
     
            // Change x to x^2
            x = (x * x);
        }
        return res % p;
    }
	long long solve(int arr[],long long n,long long sum)
	{
	    if(n<=0)
	    {
	        return sum==0;
	    }
	    if(sum<0)
	    {
	        return 0;
	    }
	    if(dp[n][sum]!=-1)
	    {
	        return dp[n][sum];
	    }
	    if(sum==0)
	    {
	        long long x=0;
	        for(long long j=0;j<sz;j++)
	        {
	            if(arr[j]==0)
	            {
	                x++;
	            }
	        }
	        return dp[n][sum]=power(2,x);
	    }
	    return dp[n][sum]=((solve(arr,n-1,sum-arr[n-1]))%mod+solve(arr,n-1,sum)%mod)%mod;
	}
	long long perfectSum(int arr[], long long n, long long sum)
	{
        // Your code goes here
        sz=n;
        sort(arr,arr+n);
        dp.resize(n+1,vector<long long>(sum+1,-1));
        solve(arr,n,sum);
	}
	  
};



//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends