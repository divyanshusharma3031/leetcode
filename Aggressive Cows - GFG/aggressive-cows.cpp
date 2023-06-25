//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool check(int mid,int k,vector<int> &arr)
    {
        int diff=0;
        int prev=arr[0];
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            if((arr[i]-prev)>=mid)
            {
                k--;
                prev=arr[i];
            }
        }
        return k<=1;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        // max(min)
        int lo=0;
        sort(stalls.begin(),stalls.end());
        int hi=stalls[n-1]-stalls[0];
        int ans=hi;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(check(mid,k,stalls))
            {
                ans=mid;
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends