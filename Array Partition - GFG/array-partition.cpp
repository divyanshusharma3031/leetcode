// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool partition(int i,int n,int k,int m,vector<int> &arr,vector<int> &dp)
    {
        if(i>=n)
        {
            return true;
        }
        if((i+k-1)>=n || (arr[i+k-1]-arr[i])>m)
        {
            return dp[i]=false;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        for(int j=i+k-1;j<n;j++)
        {
            if((arr[j]-arr[i])>m)
            {
                return dp[i]=false;
            }
            if(partition(j+1,n,k,m,arr,dp))
            {
                return dp[i]=true;
            }
        }
        return dp[i]=false;
    }
    bool partitionArray(int n, int k, int m, vector<int> &arr){
        // code here
        if(k>n)
        {
            return false;
        }
        sort(arr.begin(),arr.end());
        vector<int> dp(n+1,-1);
        return partition(0,n,k,m,arr,dp);
        
    }
};

// { Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, K, M;
        cin >> N >> K >> M;
        vector<int> A(N);
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
        Solution obj;
        bool ans = obj.partitionArray(N, K, M, A);
        if(ans){
            cout << "YES\n";
        }
        else{
            cout<< "NO\n";
        }
    }
}
  // } Driver Code Ends