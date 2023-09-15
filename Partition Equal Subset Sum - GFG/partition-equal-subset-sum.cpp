//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool subsetsum(int n,int arr[],int s)
    {
        if(n==0 && s!=0)
        {
            return false;
        }
        if(s==0)
        {
            return true;
        }
        if(s-arr[n-1]>=0)
        {
            return subsetsum(n-1,arr,s-arr[n-1])|| subsetsum(n-1,arr,s);
        }
        return subsetsum(n-1,arr,s);
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int s=0;
        for(int i=0;i<N;i++)
        {
            s+=arr[i];
        }
        if(s%2)
        {
            return 0;
        }
        return subsetsum(N,arr,s/2);
    }
};


//{ Driver Code Starts.

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
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends