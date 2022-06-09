class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;
        
        int n=s.length();//size of s
        
        int m=p.length();//size of p
        
        vector<int> mpp(26,0);
        vector<int> copy(26,0);
        for(int i=0;i<m;i++)
        {
            mpp[p[i]-'a']++;
        }
        copy=mpp;
        for(int i=0;i<n;i++)
        {
            if(mpp[s[i]-'a'])
            {
                mpp[s[i]-'a']--;
                int c=0;
                for(int j=i+1;j<n;j++)
                {
                    if((c+1)==m)
                    {
                        break;
                    }
                    if(mpp[s[j]-'a'])
                    {
                        // cout<<j<<" ";
                        mpp[s[j]-'a']--;
                        c++;
                    }
                    else
                    {
                        break;
                    }
                }
                if((c+1)==m)
                {
                    ans.push_back(i);
                }
                mpp=copy;
            } 
        }
        return ans;
    }
};