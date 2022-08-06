class Solution {
public:
    vector<vector<int>> ans;
    void subsets(int i,vector<int> &v,vector<int> &nums)
    {
        ans.push_back(v);
        int n=nums.size();
        if(i>=n)
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
            subsets(j+1,v,nums);
            v.pop_back();
        }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> v;
        int i=0;
        sort(nums.begin(),nums.end());
        subsets(i,v,nums);
        return ans;
    }
};