class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int f=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                f=mid;
                end=mid-1;
            }
            else if(nums[mid]<target)
            {                
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        int l=-1;
        start=0;
        end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                l=mid;
                start=mid+1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return {f,l};
    }
};