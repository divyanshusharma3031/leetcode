class Solution {
public:
    vector<vector<int>> dp;
    bool ismatch(int i,int j,string s,string p)
    {
        int n=s.size();
        int m=p.size();
        
        if(j==m)
        {
            return i==n;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(p[j+1]=='*')
        {
            int x=i;
            if(ismatch(x,j+2,s,p))
            {
                return dp[i][j]=true;
            }
            while(x<n && (s[x]==p[j] || p[j]=='.'))
            {
                if(ismatch(x+1,j+2,s,p))
                {
                    // cout<<"yes\n";
                    return dp[i][j]=true;
                }
                x++;
            }
        }
        else if(i<n && (s[i]==p[j] || p[j]=='.'))
        {
            return dp[i][j]=ismatch(i+1,j+1,s,p);
        }
        return dp[i][j]=false;
    }
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        dp.resize(n+1,vector<int>(m+1,-1));
        return ismatch(0,0,s,p);
    }
};