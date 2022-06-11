class Solution {
public:
    int lengthOfLongestSubstring(string S) {
        if(S.length()==0)
        {
            return 0;
        }
        int i=0;
        int j=0;
       map<int,int> v;
        vector<int> res(256,0);
        int ans=1;
        int n=S.length();
        while(i<n)
        {
            v[S[i]-'a']++;
            if(v[S[i]-'a']>1)
            {
                char ele=S[i];
                while(S[j]!=ele)
                {
                    v[S[j]-'a']--;
                    j++;
                }
                v[S[j]-'a']--;
                j++;
                // v[S[i]-'a']--;
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};