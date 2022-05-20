class Solution {
public:
    string pushDominoes(string s) {
        int n=s.length();
        string ans="";
        vector<int> r(n,0);
        vector<int> l(n,0);
        int idx=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                idx=i;
            }
            if(idx==-1)
            {
                r[i]=0;   
            }
            else if(s[i]=='L')
            {
                idx=-1;
                r[i]=0;
            }
            else
            {
                r[i]=i-idx;
            }
        }
        idx=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='L')
            {
                idx=i;
            }
            if(idx==-1)
            {
                l[i]=0;   
            }
             else if(s[i]=='R')
            {
                idx=-1;
                l[i]=0;
            }
            else
            {
                l[i]=idx-i;
            }
        }
        for(int i=0;i<n;i++)
        {
            // cout<<l[i]<<" "<<r[i]<<"\n";
            if(l[i]==r[i] && l[i]==0)
            {
                ans+=s[i];
            }
            else if(l[i]==r[i])
            {
                ans+=".";
            }
            else if(l[i]!=0 && r[i]==0)
            {
                ans+="L";
            }
            else if(l[i]==0 && r[i]!=0)
            {
                ans+="R";
            }
            else if(l[i]>r[i])
            {
                ans+="R";
            }
            else
            {
                ans+="L";
            }
        }
        return ans;
    }
};