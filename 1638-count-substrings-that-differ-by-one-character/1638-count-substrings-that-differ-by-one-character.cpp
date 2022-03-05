class Solution {
public:
    int count(string &s,string &t,int i,int j)
    {
        int pre=0;
        int cur=0;
        int res=0;
        int n=s.length();
        int m=t.length();
        while(i<n && j<m)
        {
            cur++;
            if(s[i]!=t[j])
            {
                pre=cur;
                cur=0;
            }
            res+=pre;
            i++;
            j++;
        }
        return res;
    }
    int countSubstrings(string s, string t) {
        int n=s.length();
        int m=t.length();
        int res=0;
        for(int i=0;i<n;i++){
            res+=count(s,t,0,i);
        }
        for(int j=1;j<m;j++)
        {
            res+=count(s,t,j,0);
        }
        return res;
    }
};