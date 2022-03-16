class Solution {
public:
    vector<vector<int>> dp;
    int lis(vector<int> &nums,int n,int ele)
    {
        // cout<<n<<" "<<ele<<"\n";
        if(n<=0)
        {
            if(n==0 && ele==0 &&  nums[n]<nums[ele])
            {
                return dp[n][ele]=1;
            }
            else
            {
                return 0;
            }
        }
        if(dp[n][ele]!=-1)
        {
            return dp[n][ele];
        }
        if(ele==nums.size() || nums[n-1]<nums[ele])
        {
            return dp[n][ele]=max(1+lis(nums,n-1,n-1),lis(nums,n-1,ele));
        }
        else
        {
            return dp[n][ele]=lis(nums,n-1,ele);
        }
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n+1,vector<int>(n+1,-1));
        return lis(nums,nums.size(),n);
    }
};