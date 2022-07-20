class Solution {
public:
    map<string,int> mpp;
    bool isSubSequence(string& s1, string& s2)
    {
        int n = s1.length(), m = s2.length();
        if(n>m)
        {
            return 0;
        }
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (s1[i] == s2[j])
                i++;
            j++;
        }
        return i == n;
    }
 
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++)
        {
            if(mpp[words[i]]>0)
            {
                ans++;
                continue;
            }
            else if(mpp[words[i]]<0)
            {
                continue;
            }
            if(isSubSequence(words[i],s))
            {
                mpp[words[i]]++;
                ans++;
            }
            else
            {
                mpp[words[i]]=-1;   
            }
        }
        return ans;
    }
};