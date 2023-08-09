//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution
{
public:
    int dp[31][31][31];
    bool Scramble(int i, int j, int len, string &s1, string &s2)
    {
        if (len==1)
        {
            return s1[i] == s2[j];
        }
        int n = s1.size();
        bool b = false;
        if(dp[i][j][len]!=-1)
        {
            return dp[i][j][len];
        }
        for (int k = 1; k < len; k++)
        {
            b = b | ((Scramble(i, j, k, s1, s2) && Scramble(i + k, j + k, len - k, s1, s2))) | ((Scramble(i, j + len - k, k, s1, s2) && Scramble(i + k, j, len - k, s1, s2)));
        }
        return dp[i][j][len] = b;
    }
    bool isScramble(string s1, string s2)
    {
        int n = s1.size();
        int j = n - 1;
        memset(dp, -1, sizeof(dp));
        return Scramble(0, 0, n, s1, s2);
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1>>S2;
        Solution ob;
        
        if (ob.isScramble(S1, S2)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends