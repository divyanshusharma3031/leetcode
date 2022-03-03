class Solution {
public:
    bool checksub(int n,int m,string s,string t)
    {
        if(n==0)
        {
            return true;
        }
        if(m==0)
        {
            return false;
        }
        if(s[n-1]==t[m-1])
        {
            return checksub(n-1,m-1,s,t);
        }
        return checksub(n,m-1,s,t);
    }
    bool isSubsequence(string s, string t) {
       return checksub(s.length(),t.length(),s,t); 
    }
};