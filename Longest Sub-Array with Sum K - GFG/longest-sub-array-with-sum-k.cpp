// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
        int i=0;
        int ans=0;
        int s=0;
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
            if(s==k)
            {
                ans=max(ans,i+1);
            }
            if(mpp.find(s-k)!=mpp.end())
            {
                // cout<<mpp[s-k]<<"\n"<<i<<"\n";
                ans=max(ans,i-mpp[s-k]);
            }
            if(mpp.find(s)==mpp.end())
                mpp[s]=i;
            // mpp[s]=i;
        }
        return ans;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends