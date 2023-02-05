class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;
        
        int n=s.length();//size of s
        
        int m=p.length();//size of p
        
        if(m>n)
        {
            return ans;
        }
        
        vector<int> mpp(26,0);
        
        for(int i=0;i<m;i++)
        {
            mpp[p[i]-'a']++;
        }
        int i=0;
        int j=m;
        vector<int> copy(26,0);
        int c=0;
        for(i=0;i<j;i++)
        {
            copy[s[i]-'a']++;
            if(copy==mpp)
            {
                ans.push_back(0);
            }
        }
        i=0;
        while(j<n)
        {
            copy[s[i]-'a']--;
            i++;
            copy[s[j]-'a']++;
            j++;
            if(copy==mpp)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};