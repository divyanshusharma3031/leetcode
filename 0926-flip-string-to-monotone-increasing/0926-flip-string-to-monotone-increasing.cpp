class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n=s.size();
        int z=0;
        int o=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        int ans=min(z,o);
        vector<int> suff(n+1,0);
        if(s[n-1]=='0')
        {
            suff[n-1]=1;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(s[i]=='0')
            {
                suff[i]=suff[i+1]+1;
            }
            else
            {
                suff[i]=suff[i+1];
            }
        }
        int c1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                c1++;
            }
            ans=min(ans,c1+suff[i+1]);
        }
        return ans;
    }
};