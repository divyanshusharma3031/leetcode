//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector<int> vis(leaves+1,0);
        sort(frogs,frogs+N);
        if(frogs[0]==1)
        {
            return 0;
        }
        set<int> s;
        for(int i=0;i<N;i++)
        {
            s.insert(frogs[i]);
        }
        vector<int> v;
        for(auto it:s)
        {
            v.push_back(it);
        }
        N=v.size();
        for(int i=0;i<N;i++)
        {
            int ele=v[i];
            for(int j=ele;j<=leaves;j+=ele)
            {
                vis[j]=1;
            }
        }
        int ans=0;
        for(int i=1;i<=leaves;i++)
        {
            if(vis[i]==0)
            {
                ans++;
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
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends