//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int check(int mid,vector<int> &stalls,int k)
    {
        int lo=stalls[0];
        int n=stalls.size();
        for(int i=0;i<n;i++)
        {
            if((stalls[i]-lo)>=mid)
            {
                lo=stalls[i];
                k--;
            }
        }
        return k<=1;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int lo=0;
        int hi=1e9;
        int ans=0;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(check(mid,stalls,k))
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