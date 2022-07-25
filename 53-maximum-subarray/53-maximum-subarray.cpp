class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int mx=-1e9;
        int m=nums[0];
        for(int i=0;i<n;i++)
        {
            m=max(m,nums[i]);
        }
        int s=0;
        for(int i=0;i<n;i++)
        {
            s=s+nums[i];
            if(s<0)
            {
                s=0;
            }
            mx=max(mx,s);
        }
        if(mx==0)
        {
            return m;
        }
        return mx;
    }
};