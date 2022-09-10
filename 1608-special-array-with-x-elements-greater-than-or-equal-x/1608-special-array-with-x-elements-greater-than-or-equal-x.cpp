class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int n=nums.size();
        if(nums[0]>=n)
        {
            return n;
        }
        int lo=1;
        int hi=n-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(nums[mid]>=(n-mid) && nums[mid-1]<(n-mid))
            {
                return n-mid;
            }
            else if(nums[mid]>=(n-mid))
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
};