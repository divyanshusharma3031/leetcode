//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        long long a=1ll<<(l-1);
        long long b=1ll<<(r-1);
        while(y>0)
        {
            long long rmsb=(y)&(-y);
            if(rmsb>=a && rmsb<=b)
            {
                x=x|((rmsb));
            }
            y=y-rmsb;
        }
        return x;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends