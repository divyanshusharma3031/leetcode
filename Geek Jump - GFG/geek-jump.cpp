//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int n;
  int dp[100001];
  int solve(int i,vector<int> &height)
  {
      if(i>=(n-1))
      {
          return 0;
      }
      if(dp[i]!=-1)
      {
          return dp[i];
      }
      return dp[i]=min(abs(height[i]-height[i+1])+solve(i+1,height),abs(height[i]-height[i+2])+solve(i+2,height));
  }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        this->n=n;
        memset(dp,-1,sizeof(dp));
        height.push_back(1e9);
        height.push_back(1e9);
        height.push_back(1e9);
        return solve(0,height);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends