class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>=nums[i+1])
            {
                pos.push_back(i);
            }
        }
        if(pos.size()==0)
        {
            return true;
        }
        if(pos.size()>1)
        {
            return false;
        }
        int p=pos[0];
        if(p==0 || p>=n-2)
        {
            return true;
        }
        return (nums[p-1]<nums[p+1]) || ( nums[p]<nums[p+2]);
    }
};
// [105,924,32,968]