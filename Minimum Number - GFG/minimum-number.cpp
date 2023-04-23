//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        // Code here
        // may or may not work
        int gcd=arr[0];
        for(int i=0;i<n;i++)
        {
            gcd=__gcd(arr[i],gcd);
        }
        return gcd;
    }
};

// 5
// 4 6 7 8 9
// 1 4 6 7 8
// 1 4 6 7 8


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.minimumNumber(n,arr)<<endl;
    }
}
// } Driver Code Ends