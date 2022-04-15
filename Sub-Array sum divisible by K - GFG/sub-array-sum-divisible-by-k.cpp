// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	long long subCount(long long arr[], int n, long long k)
	{
	    // Your code goes here
	    unordered_map<int,int> mpp;
	    long long s=0;
	    long long ans=0;
	    for(int i=0;i<n;i++)
	    {
	        s+=arr[i];
	        long long rem=s%k;
	        if(rem<0)
	        {
	            rem+=k;
	        }
	        if((s%k)==0)
	        {
	            ans++;
	        }
	        if(mpp[rem])
	        {
	            ans+=mpp[rem];
	        }
	        mpp[rem]++;
	    }
	    return ans;
	}



};


// { Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	long long k;
		cin>>n >> k;
		long long a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
        

        Solution ob;
        cout << ob.subCount(a, n, k);
	    cout << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends