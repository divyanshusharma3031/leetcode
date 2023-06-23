//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int lengthOfLongestAP(int arr[], int n) {
        // code here
        if(n==1)return 1;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int ans=2;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int d=arr[j]-arr[i];
                int cnt=2;
                int s=arr[j];
                while(mp.find(d+s)!=mp.end())
                {
                    cnt++;
                    s=d+s;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends