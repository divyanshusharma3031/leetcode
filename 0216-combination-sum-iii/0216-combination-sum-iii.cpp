class Solution {
public:
    vector<vector<int>> ans;
    void dfs(int i,vector<int> &nums,int target,vector<int> &temp,int k)
    {
        if(target<0)
        {
            return;
        }
        if(target==0)
        {
            if(temp.size()==k)
            {
                ans.push_back(temp);
            }
            return;
        }
        if(i==nums.size())
        {
            return;
        }
        for(int idx=i;idx<nums.size();idx++)
        {
            temp.push_back(nums[idx]);
            dfs(idx+1,nums,target-nums[idx],temp,k);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        for(int i=1;i<=9;i++)
        {
            nums.push_back(i);
        }
        vector<int> temp;
        dfs(0,nums,n,temp,k);
        return ans;
    }
};