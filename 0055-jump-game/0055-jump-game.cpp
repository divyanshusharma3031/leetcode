class Solution {
public:
    bool canJump(vector<int>& nums) {
        int idx=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(idx<i)
            {
                return false;
            }
            idx=max(idx,nums[i]+i);
        }
        return idx>=(n-1);
    }
};