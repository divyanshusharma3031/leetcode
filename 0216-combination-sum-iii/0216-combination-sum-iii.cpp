class Solution {
public:
    vector<vector<int>> matrix;
    void solve(int k,int n,vector<int> &ans,map<int,int> &used)
    {
        if(n<0)
        {
            return;
        }
        if(k==0)
        {
            if(n==0)
            {
                matrix.push_back(ans);
            }
            return;
        }
        for(int i=1;i<=9;i++)
        {
            if(!used[i])
            {
                used[i]=1;
                ans.push_back(i);
                solve(k-1,n-i,ans,used);
                ans.pop_back(); 
                used[i]=0;
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ans;
        map<int,int> used;
        for(int i=1;i<=9;i++)
        {
            ans.push_back(i);
            used[i]=1;
            solve(k-1,n-i,ans,used);
            ans.pop_back();
            used[i]=0;
        }
        for(int i=0;i<matrix.size();i++)
        {
            sort(matrix[i].begin(),matrix[i].end());
        }
        set<vector<int>> s;
        for(auto it:matrix)
        {
            s.insert(it);
        }
        vector<vector<int>> v;
        for(auto it:s)
        {
            v.push_back(it);
        }
        return v;
    }
};