class Solution {
public:
    bool checkRecord(string s) {
        int a=0;
        int l=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
        }
        if(a>=2)
        {
            return false;
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                cnt++;
            }
            else
            {
                cnt=0;
            }
            l=max(cnt,l);
        }
        if(l>=3)
        {
            return false;
        }
        return true;
    }
};