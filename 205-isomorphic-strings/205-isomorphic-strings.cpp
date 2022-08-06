class Solution {
public:
    bool isIsomorphic(string s, string t) {
       map<char,char> mpp;
        map<char,int> mpp2;
        int n=s.size();
        int m=t.size();
        if(n!=m)
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if(mpp2.find(t[i])!=mpp2.end())
            {
                continue;
            }
            mpp[s[i]]=t[i];
            mpp2[t[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            s[i]=mpp[s[i]];
        }
        return s==t;
    }
};