class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans="";
        vector<pair<char,int>> v;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            v.push_back({indices[i],s[i]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            ans+=v[i].second;
        }
        return ans;
    }
};