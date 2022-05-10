// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int s, int n, int m){
        // code here
        if(n<m)
        {
            return -1;
        }
        
        int ns=s/7;
        
        int y=s-ns;
        
        int ans=ceil(double(m*s)/n);
        
        if(ans<=y)
        {
            return ans; 
        }
        
        return -1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}  // } Driver Code Ends