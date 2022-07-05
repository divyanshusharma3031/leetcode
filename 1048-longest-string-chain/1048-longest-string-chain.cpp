class Solution {
public:
    static bool compare(string s1,string s2)
    {
        return s1.size()<s2.size();
    }
    bool isSubsequence(string s, string t) {
        int j = 0; 
        int m = s.length();
        int n = t.length();

        for (int i=0; i<n && j<m; i++) 
            if (s[j] == t[i]) 
                j++; 

        // If all characters of s were found in t 
        return (j == m); 
    }
    int longestStrChain(vector<string>& words) {
        
        sort(words.begin(),words.end(),compare);
        
        int n=words.size();
        
        vector<int> len(n+1,1);
        
        for(int i=0;i<n;i++)
        {
            int mx=0;
            for(int j=0;j<i;j++)
            {
                if((words[i].size()-words[j].size())==1 && isSubsequence(words[j],words[i]))
                {
                    mx=max(mx,len[j]);
                }
            }
            len[i]+=mx;
        }
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,len[i]);
        }
        return mx;
    }
};