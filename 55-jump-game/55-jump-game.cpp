class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size=nums.size();
        int mnjump=0;
        for(int i=nums.size()-2;i>=0;i--)
        {
            mnjump++;
            if(nums[i]>=mnjump)
            {
                mnjump=0;
            }
        }
        if(mnjump==0)
        {
            return true;
        }
        
        return false;
    }
};