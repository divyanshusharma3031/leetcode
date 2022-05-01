// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

// typedef long long ll;

class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    ll ans=0;
	    ll z=1;
	    ll o=1;
	    ll i=1;
	    const int mod=1000000007;
	    while(i<n)
	    {
	       // cout<<z<<" "<<o<<"\n";
	       // ans=((z*2)+(o*1));
	        i++;
	        ll zp=z;
	        z=((z+o)%mod);
	        o=zp;
	    }
	    ans=((z+o)%mod);
	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends