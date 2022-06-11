class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> copy=strs;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            sort(strs[i].begin(),strs[i].end());
        }
        map<string,vector<string>> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[strs[i]].push_back(copy[i]);
        }
        vector<vector<string>> ans;
        for(auto it:mpp)
        {
            vector<string> v;
            for(auto i:it.second)
            {
                v.push_back(i);
            }
            ans.push_back(v);
        }
        return ans;
    }
};