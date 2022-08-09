class Solution {
public:
    int max_count(unordered_map<char,int> &ump)
    {
        int ans=0;
        for(auto i=ump.begin();i!=ump.end();i++)
        {
            ans=max(ans,i->second);
        }
        return ans;
    }
    int characterReplacement(string s, int k) 
    {
        int sl=s.length();
        int l=0;
        int r=0;
        int ans=0;
        
        unordered_map<char,int> ump;
        while(r<sl)
        {
            ump[s[r]]++;
            int max_c=max_count(ump);
            if(((r-l+1) - max_c)<=k)
            {
                ans=max(ans,(r-l+1));
                r++;
            }
            else
            {
                while(((r-l+1) - max_c)>k)
                {
                    ump[s[l]]--;
                    max_c=max_count(ump);
                    l++;
                }
                r++;
            }
        }
        return ans;
    }
};