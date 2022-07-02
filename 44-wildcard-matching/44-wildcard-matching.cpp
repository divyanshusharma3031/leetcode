class Solution {
public:
    vector<vector<int>> dp;
    bool match(int i,int j,string &s,string &p)
    {
        int n=s.length();
        int m=p.length();
        
        if(i==n && j==m)
        {
            return true;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(i<n && j<m && (s[i]==p[j] || p[j]=='?'))
        {
            return dp[i][j]=match(i+1,j+1,s,p);
        }
        if(j<m && p[j]=='*')
        {
            bool y=false;
            for(int x=i;x<=n;x++)
            {
                y=y|match(x,j+1,s,p);
            }
            return dp[i][j]=y;
        }
        return false;
    }
    bool isMatch(string s, string p) {
        dp.resize(s.length()+1,vector<int>(p.length()+1,-1));
        int n=s.length();
        int m=p.length();
        return match(0,0,s,p);
    }
};