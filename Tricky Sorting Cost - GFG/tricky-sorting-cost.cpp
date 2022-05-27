// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int sortingCost(int n, int arr[]){
        // code here
        map<int,int> mpp;
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(mpp.find(arr[i]-1)!=mpp.end())
            {
                mpp[arr[i]]=mpp[arr[i]-1];
            }
            mpp[arr[i]]++;
            mx=max(mx,mpp[arr[i]]);
        }
        return n-mx;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        Solution ob;
        
        cout<<ob.sortingCost(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends