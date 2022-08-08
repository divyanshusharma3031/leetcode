class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0;
        int r=0;
        int ans=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                l++;
            }
            if(s[i]=='R')
            {
                r++;
            }
            if(l==r)
            {
                l=0;
                r=0;
                ans++;
            }
        }
        return ans;
    }
};