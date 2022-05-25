// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends


class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long n)
    {
        // Your code goes here
        long long ans=INT_MIN;
        queue<long long> q;
        for(int i=0;i<n;i++)
        {
            q.push(arr[i]);
            if(q.size()==2)
            {
                ans=max(ans,arr[i]+q.front());
                q.pop();
            }
        }
        // if(q.size()==2)
        //     {
        //         ans=max(ans,arr[i]+q.front());
        //         q.pop();
        //     }
        return ans;
    }
};



// { Driver Code Starts.
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
	    for(ll i=0;i<n;i++)
		    cin>>a[i];
		Solution ob;
	    cout<<ob.pairWithMaxSum(a,n)<<endl;
	}
	return 0;
}

  // } Driver Code Ends