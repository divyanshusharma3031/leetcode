//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    int dp[1001][1001][2];
    long long solve(int i,int j,bool b,int arr[])
    {
        if(i>=j)
        {
            return 0;
        }
        if(dp[i][j][b]!=-1)
        {
            return dp[i][j][b];
        }
        if(b)
        {
            return dp[i][j][b]=max(arr[i]+solve(i+1,j,false,arr),arr[j]+solve(i,j-1,false,arr));
        }
        return dp[i][j][b]=min(solve(i+1,j,true,arr),solve(i,j-1,true,arr));
    }
    long long maximumAmount(int arr[], int n){
        // Your code here
        memset(dp,-1,sizeof(dp));
        return solve(0,n-1,true,arr);
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends