// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimumCostOfBreaking(vector<int> x, vector<int> y, int m, int n){
        //Write your code here
        sort(x.begin(),x.end(),greater<int>());
        
        sort(y.begin(),y.end(),greater<int>());
        
        int i=0;
        
        int j=0;
        
        int ans=0;
        
        int vc=1;
        int hc=1;
        
        while(i<m && j<n)
        {
            if(x[i]>=y[j])
            {
                ans=ans+x[i]*vc;
                i++;
                hc++;
            }
            else
            {
                ans=ans+y[j]*hc;
                j++;
                vc++;
            }
        }
        
        while(i<m)
        {
            ans=ans+x[i]*vc;
            i++;
        }
        
        while(j<n)
        {
            ans=ans+y[j]*hc;
            j++;
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
	    int m, n;
	    cin >> m >> n;
	    vector<int>X(m - 1), Y(n - 1);
	    for(int i = 0; i < m - 1; i++){
	        cin >> X[i];
	    }
	    for(int i = 0; i < n - 1; i++){
	        cin >> Y[i];
	    }
	    Solution ob;
	    int ans = ob.minimumCostOfBreaking(X, Y, m - 1, n - 1);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends