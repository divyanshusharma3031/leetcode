class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int i=0;
        int n=s.length();
        map<int,int> mpp;
        map<string,int> occ;
        int j=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
            if((i-j+1)>minSize)
            {
                mpp[s[j]]--;
                
                if(mpp[s[j]]==0)
                {
                    mpp.erase(s[j]);
                }
                j++;
            }
            if((i-j+1)==minSize  && mpp.size()<=maxLetters)
            {
                ans=max(ans,++occ[s.substr(j,i-j+1)]);
            }
        }
        return ans;
    }
};