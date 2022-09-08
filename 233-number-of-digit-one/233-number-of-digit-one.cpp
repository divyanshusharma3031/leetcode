class Solution {
public:
    int dp[10][10][2];
    int countways(string & s,int idx,int count,bool small)
    {
        // cout<<count<<"\n";
        if(idx==s.length())
        {
            // cout<<count<<" ";
            return count;
        }
        if(dp[idx][count][small]!=-1)
        {
            return dp[idx][count][small];
        }
        int limit;
        if(small)
        {
            limit=9;
        }
        else
        {
            limit=s[idx]-'0';
        }
        int ans=0;
        for(int i=0;i<=limit;i++)
        {
            int ncount=count;
            if(i==1)
            {
                ncount++;
            }
            bool nsmall=(!(small) && (i==limit))?false:true;
            ans=ans+countways(s,idx+1,ncount,nsmall);
        }
        return dp[idx][count][small]=ans;
    }
    int countDigitOne(int n) {
        memset(dp,-1,sizeof(dp));
        string s=to_string(n);
        return countways(s,0,0,false);
    }
};