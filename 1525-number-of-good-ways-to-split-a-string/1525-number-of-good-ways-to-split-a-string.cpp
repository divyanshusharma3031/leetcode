class Solution {
public:
    int numSplits(string s) {
        set<int> s1;
        // set<int> s2;
        vector<int> pref(s.length(),0);
        vector<int> suff(s.length()+1,0);
        
        for(int i=0;i<s.length();i++)
        {
            s1.insert(s[i]);
            pref[i]=s1.size();
        }
        
        reverse(s.begin(),s.end());
        s1.clear();
        for(int i=0;i<s.length();i++)
        {
            s1.insert(s[i]);
            suff[i+1]=s1.size();
        }
        
        reverse(suff.begin(),suff.end());
        
        // for(int i=0;i<s.length();i++)
        // {
        //     cout<<pref[i]<<" "<<suff[i+1]<<"\n";
        // }
        int ans=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(suff[i+1]==pref[i])
            {
                ans+=1;
            }
        }
        return ans;
    }
};