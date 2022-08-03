class Solution {
public:
    void combo(int n,int k,vector<int> &v,vector<vector<int>> &ans)
    {
        if(k==0)
        {
            ans.push_back(v);
            return;
        }
        if(n==0)
        {
            return;
        }
        v.push_back(n);
        combo(n-1,k-1,v,ans);
        v.pop_back();
        combo(n-1,k,v,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> v;
        combo(n,k,v,ans);
        return ans;
    }
};