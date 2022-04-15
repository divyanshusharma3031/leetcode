// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        long long ans=0;
        map<int,int> mpp;
        long long count=0;
        mpp[0]++;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                count++;
            }
            else
            {
                count--;
            }
            if(mpp[count])
            {
                ans+=mpp[count];
            }
            mpp[count]++;;
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