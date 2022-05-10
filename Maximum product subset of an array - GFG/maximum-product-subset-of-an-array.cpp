// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long int findMaxProduct(vector<int>&arr, int n){
        //Write your code here 
        sort(arr.begin(),arr.end());
        if(n==1)
        {
            return arr[0];
        }
        const int mod=1e9+7;
        long long m1=arr[0];
        int i=1;
        for(i=1;i<n;i++)
        {
            if(arr[i]>=0)
            {
                break;
            }
            m1=(arr[i]*m1)%mod;
        }
        i--;
        if(m1<0)
        {
            if(i>0)
            {
                m1=m1/arr[i];
            }
            else
            {
                m1=0;
            }
        }
        // cout<<m1<<"\n";
        long long m2=1;
        i++;
        while(arr[i]==0 && i<n)
        {
            i++;
        }
        if(i==n)
        {
            return m1;
        }
        while(i<n)
        {
            m2=(m2*arr[i])%mod;
            i++;
        }
        if(m1==0)
        {
            return m2;
        }
        return (m1*m2)%mod;
    }
};



// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    long long int ans = ob.findMaxProduct(arr, n);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends