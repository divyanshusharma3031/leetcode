class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int> mpp;
        map<string,int> single;
        int ans=0;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            if(words[i][0]==words[i][1])
            {
                single[words[i]]++;
                continue;
            }
            mpp[words[i]]++;
            string x=words[i];
            reverse(x.begin(),x.end());
            if(mpp[x])
            {
                ans+=4;
                mpp[x]--;
                mpp[words[i]]--;
            }
        }
        bool b=false;
        for(auto it:single)
        {
            if(it.second>1)
            {
                if(it.second%2)
                {
                    ans=ans+2*it.second-2;
                    b=true;
                }
                else
                {
                    ans=ans+2*it.second;
                }
            }
            else
            {
                b=true;
            }
        }
        if(b)
        {
            ans=ans+2;
        }
        return ans;
    }
};