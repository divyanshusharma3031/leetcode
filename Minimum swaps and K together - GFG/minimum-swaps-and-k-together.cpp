// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complete the function
        
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
            {
                c++;
            }
        }
        
        //count the total elements needed to be replaced
        
        int ans=INT_MAX;
        int x=0;
        int i;
        for(i=0;i<c;i++)
        {
            if(arr[i]<=k)
            {
                x++;
            }
        }
        int j=0;
        ans=min(ans,c-x);
        while(i<n)
        {
            if(arr[j]<=k)
            {
                x--;
            }
            if(arr[i]<=k)
            {
                x++;
            }
            ans=min(ans,c-x);
            i++;
            j++;
        }
        ans=min(ans,c-x);
        return ans;
    }
};

// 11
// 10 12 20 20 5 19 19 12 1 20 1
// 1
// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends