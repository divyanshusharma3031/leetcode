class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            s=s+nums[i];
        }
        int p=0;
        
        for(int i=0;i<n;i++)
        {
            p+=nums[i];
            if((p-nums[i])==(s-p))
            {
                return i;
            }
        }
        return -1;
    }
};