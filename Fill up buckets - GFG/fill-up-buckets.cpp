//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    const int mod=1e9+7;
    int totalWays(int n, vector<int>capacity) {
        // code here
        if(n==1)
        {
            return capacity[0];
        }
        long long ans=1;
        sort(capacity.begin(),capacity.end());
        for(int i=0;i<n;i++)
        {
            long long x=capacity[i];
            ans=(ans*(x-i))%mod;
        }
        if(ans<=0)
        {
            return 0;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>capacity(n);
		for(int i = 0; i < n; i++)
			cin >> capacity[i];
		Solution ob;
		int ans = ob.totalWays(n, capacity);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends