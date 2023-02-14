//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    int n;
    typedef vector<int> vi;
    int dp[100001][3];
    int solve(int i,vi &pink,vi &black,vi &yellow,int prev)
    {
        if(i==n)
        {
            return 0;
        }
        if(dp[i][prev]!=-1)
        {
            return dp[i][prev];
        }
        if(prev==0)
        {
            return dp[i][prev]=min(black[i]+solve(i+1,pink,black,yellow,1),yellow[i]+solve(i+1,pink,black,yellow,2));
        }
        if(prev==1)
        {
            return dp[i][prev]=min(pink[i]+solve(i+1,pink,black,yellow,0),yellow[i]+solve(i+1,pink,black,yellow,2));
        }
        return dp[i][prev]=min(pink[i]+solve(i+1,pink,black,yellow,0),black[i]+solve(i+1,pink,black,yellow,1));
    }
    int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
        vector<int> pink(N,0);
        vector<int> black(N,0);
        vector<int> yellow(N,0);
        n=N;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<N;i++)
        {
            pink[i]=colors[i][0];
            black[i]=colors[i][1];
            yellow[i]=colors[i][2];
        }
        
        return min({pink[0]+solve(1,pink,black,yellow,0),black[0]+solve(1,pink,black,yellow,1),yellow[0]+solve(1,pink,black,yellow,2)});
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends