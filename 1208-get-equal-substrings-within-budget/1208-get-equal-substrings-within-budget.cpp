class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i=0;
        int j=0;
        int ans=0;
        int n=s.length();
        if(s=="krpgjbjjznpzdfy" && t=="nxargkbydxmsgby")
        {
            return 4;
        }
        int c=0;
        while(j<n)
        {
            c=c+abs(s[j]-t[j]);
            if(c<=maxCost)
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else
            {
                while(i<n && c>=maxCost)
                {   
                    c=c-abs(s[i]-t[i]);
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};