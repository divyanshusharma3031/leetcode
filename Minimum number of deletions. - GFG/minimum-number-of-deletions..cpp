// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}// } Driver Code Ends


int minDeletions(string s, int n) { 
    //complete the function here 
        string s1=s;
        reverse(s1.begin(),s1.end());
        // cout<<s<<" "<<s1<<"\n";
        int m=n;
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=m;i++)
        {
            dp[0][i]=0;
        }
        for(int i=0;i<=n;i++)
        {
            dp[n][0]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return n-dp[n][m];
} 