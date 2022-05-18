// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

typedef long long ll;
class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        ll ans=0;
        
        ll count=0;
        
        map<ll,ll> mpp;
        
        for(ll i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count==0)
            {
                ans++;
            }
            if(mpp[count])
            {
                ans+=mpp[count];
            }
            mpp[count]++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends