class Solution {
public:
    int isvalid(vector<int> nums,int thresold,int mid)
    {
        int s=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            float f=(float(nums[i]))/mid;
            s+=ceil(f);
            if(s>thresold)
            {
                return false;
            }
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;
        int end=-1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            end=max(end,nums[i]);
        }
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isvalid(nums,threshold,mid))
            {
                res=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return res;
    }
};