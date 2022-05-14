// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#include <iterator>

class Solution
{
    public:
    long long int maximizeSum(long long int arr[], int n, int k)
    {
        // Your code goes here
        sort(arr,arr+n);
        int i=0;
        for(i=0;i<k;i++)
        {
            if(arr[i]<=0)
            {
                arr[i]=-arr[i];
            }
            else
            {
                break;
            }
        }
        int x=k-i;
        if(x%2 && i!=0)
        {
            arr[i-1]=-arr[i-1];
        }
        else if(x%2 && i==0)
        {
             arr[i]=-arr[i];
        }
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=arr[i];
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
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}  // } Driver Code Ends