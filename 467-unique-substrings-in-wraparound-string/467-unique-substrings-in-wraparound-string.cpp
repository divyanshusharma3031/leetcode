class Solution {
public:
    int findSubstringInWraproundString(string s) {
        int ans=0;
        int n=s.length();
        if(n==1)
        {
            return 1;
        }
        vector<int> len(26,0);
        len[s[0]-'a']=1;
        int c=1;
        for(int i=1;i<n;i++)
        {
            if((s[i-1]-s[i]==25) || (s[i]-s[i-1])==1)
            {
                c++;
            }
            else
            {
                c=1;
            }
            len[s[i]-'a']=max(len[s[i]-'a'],c);
        }
        for(int i=0;i<26;i++)
        {
            // cout<<len[i]<<" ";
            ans+=len[i];
        }
        // cout<<"\n";
        return ans;
    }
};