class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<mn && nums[i]>0)
            {
                mn=nums[i];
            }
        }
        if(mn==INT_MAX)
        {
            return 1;
        }
        if(mn!=1)
        {
            return 1;
        }
        sort(nums.begin(),nums.end());
        int s=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==s)
            {
                s=s+1;
            }
        }
        return s;
    }
};