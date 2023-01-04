class Solution {
public:
    int minimumPartition(string s, int k) {
        int n=s.size();
        long long cur=0;
        int ans=0;
        for(int i=0;i<=n;i++)
        {
            if(i==n)
            {
                if(cur<=k)
                {
                    
                }
                else
                {
                    return -1;
                }
                break;
            }
            if((cur*10 + (s[i]-'0'))<=k)
            {
                cur = cur * 10 + (s[i] - '0');
            }
            else
            {
                if(cur==0 || cur>k)
                {
                    return -1;
                }
                else
                {
                    ans++;
                    cur=s[i]-'0';
                }
            }
        }
        return ans+1;
    }
};