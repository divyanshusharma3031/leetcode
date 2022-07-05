class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> len(n+1,1);
        
        for(int i=0;i<n;i++)
        {
            int m=0;
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    m=max(m,len[j]);
                }
            }
            len[i]=len[i]+m;
        }
        int mx=0;
        for(int i=0;i<=n;i++)
        {
            mx=max(mx,len[i]);
        }
        return mx;
    }
};