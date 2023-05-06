//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

int dp[101][101][101];
class Solution {
  public:
  bool solve(int n,int k,int target,vector<int> &coins)
  {
      if(n==0)
      {
        //   cout<<target<<" "<<k<<"\n"; 
          return ((target==0) && (k==0));
      }
      if(k<0)
      {
          return false;
      }
      if(target<0)
      {
          return false;
      }
      if(dp[n][k][target]!=-1)
      {
          return dp[n][k][target];
      }
      return dp[n][k][target]=(solve(n,k-1,target-coins[n-1],coins)) || (solve(n-1,k,target,coins));
  }
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
        // vector<vector<int>> prev(K+1,vector<vector<int>> )
        memset(dp,-1,sizeof(dp));
        // may Give Tle.
        sort(coins.begin(),coins.end());
        return solve(N,K,target,coins);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        int target;
        scanf("%d", &target);

        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);

        cout << res << endl;
    }
}

// } Driver Code Ends