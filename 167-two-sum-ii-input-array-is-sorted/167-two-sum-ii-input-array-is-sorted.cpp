class Solution {
public:
    int find(int target,vector<int> &nums)
    {
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]>target)
            {
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int s=target-nums[i];
            if(i<n && s==nums[i+1])
            {
                return {i+1,i+2};
            }
            int j=find(s,nums);
            if(j!=-1)
            {
                return {i+1,j+1};
            }
        }
        return {};
    }
};