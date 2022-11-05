//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxGroupSize(int arr[], int n, int k) {
        // code here
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i]%k;
        }
        int ans=0;
        vector<int> aux(k,0);
        for(int i=0;i<n;i++)
        {
            aux[arr[i]]++;
        }
        // numbers with 0 to k-1 remainders
        vector<int> vis(k,0);
        for(int i=1;i<k;i++)
        {
            // cout<<aux[i]<<" ";
            if(vis[i]==0 && vis[k-i]==0 && i!=(k-i))
            {
                ans=ans+max(aux[i],aux[k-i]);
                vis[i]++;
                vis[k-i]++;
            }
            else if(i==(k-i) && aux[i]>0)
            {
                ans++;
            }
        }
        // cout<<ans<<" ";
        if(aux[0]>=1)
            ans=ans+1;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxGroupSize(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends