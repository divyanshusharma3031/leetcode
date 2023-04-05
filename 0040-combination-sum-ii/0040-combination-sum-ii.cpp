class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i,vector<int> &nums,vector<int> &v,int target)
    {
        int n=nums.size();
        if(target==0)
        {
            ans.push_back(v);
            return;
        }
        if(i==n)
        {
            return;
        }
        if(target<0)
        {
            return;
        }
        
        for(int j=i;j<n;j++)
        {
            if(j!=i && nums[j]==nums[j-1])
            {
                continue;
            }
            v.push_back(nums[j]);
            solve(j+1,nums,v,target-nums[j]);
            v.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> v;
        sort(candidates.begin(),candidates.end());
        solve(0,candidates,v,target);
        return ans;
    }
};