class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        vector<int> a;
        vector<int> b;
        for(int i=0;i<=n;i++)
        {
            a.push_back(i);
            b.push_back(i);
        }
        reverse(b.begin(),b.end());
        vector<int> ans;
        int i=0;
        int j=0;
        for(int x=0;x<n;x++)
        {
            if(s[x]=='I')
            {
                ans.push_back(a[i]);
                i++;
            }
            else
            {
                ans.push_back(b[j]);
                j++;
            }
        }
        set<int> st;
        for(int i=0;i<=n;i++)
        {
            st.insert(i);
        }
        for(int i=0;i<n;i++)
        {
            st.erase(ans[i]);
        }
        ans.push_back(*st.begin());
        return ans;
    }
};