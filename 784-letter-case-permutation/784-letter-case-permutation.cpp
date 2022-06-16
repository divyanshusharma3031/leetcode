class Solution {
public:
    map<int,int> vis;
    void casecombo(set<string> &ans,string s,int i)
    {
        int n=s.length();
        if(i>=n)
        {
            return;
        }
        if(!(s[i]>='0' && s[i]<='9'))
        {
            string s1=s.substr(0,i+1);
            string s2=s.substr(i+1);
            s1[i]=s1[i]^32;
            string s3=s1+s2;
            ans.insert(s3);
            casecombo(ans,s3,i+1);
            casecombo(ans,s,i+1);
        }
        casecombo(ans,s,i+1);
    }
    vector<string> letterCasePermutation(string s) {
        
        set<string> ans;
        
        ans.insert(s);
        
        casecombo(ans,s,0);
        
        vector<string> v;
        
        for(auto it:ans)
        {
            v.push_back(it);
        }
        return v;
    }
};