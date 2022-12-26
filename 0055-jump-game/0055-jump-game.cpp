class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n=nums.size();
        vector<int> dp(n,false);
        dp[0]=true;
        for(int i=0;i<n;i++)
        {
            if(dp[i])
            {
                int l=nums[i];
                if(l>=1e4)
                {
                    return true;
                }
                else
                {
                    for(int j=1;j<=l && (j+i)<n;j++)
                    {
                        dp[i+j]=true;
                    }
                    if(dp[n-1])
                    {
                        return true;
                    }
                }
            }
        }
        return dp[n-1];
    }
};