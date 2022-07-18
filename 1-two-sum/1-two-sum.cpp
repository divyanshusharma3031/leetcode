class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            int t=target-nums[i];
            if(mpp.find(t)!=mpp.end())
            {
                ans.push_back(i);
                ans.push_back(mpp[t]);
                return ans;
            }
            mpp[nums[i]]=i;
        }
        return ans;
    }
};