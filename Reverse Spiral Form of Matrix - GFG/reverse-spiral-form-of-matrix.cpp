//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        vector<int> ans;
        int r1=0;
        int r2= R-1;
        int c1=0;
        int c2=C-1;
        while(ans.size()!=(C*R))
        {
            for(int i=c1;i<=c2;i++)
            {
                ans.push_back(a[r1][i]);
            }
            if(ans.size()==C*R)
            {
                break;
            }
            r1++;
            for(int i=r1;i<=r2;i++)
            {
                ans.push_back(a[i][c2]);
            }
            c2--;
            if(ans.size()==C*R)
            {
                break;
            }
            for(int i=c2;i>=c1;i--)
            {
                ans.push_back(a[r2][i]);
            }
            r2--;
            if(ans.size()==C*R)
            {
                break;
            }
            for(int i=r2;i>=r1;i--)
            {
                ans.push_back(a[i][c1]);
            }
            c1++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends