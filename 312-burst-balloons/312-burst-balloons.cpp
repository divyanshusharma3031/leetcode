class Solution {
public:
    vector<vector<int>> dp;
    int pro(vector<int> &nums,int i,int j)
    {
        if(i>j)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int maxi=-2;
        for(int ind=i;ind<=j;ind++)
        {
            int cost=nums[i-1]*nums[ind]*nums[j+1]+pro(nums,i,ind-1)+pro(nums,ind+1,j);
            maxi=max(maxi,cost);
        }
        return dp[i][j]=maxi;
    }
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        nums.push_back(1);
        reverse(nums.begin(),nums.end());
        nums.push_back(1);
        reverse(nums.begin(),nums.end());
        dp.resize(n+2,vector<int>(n+2,-1));
        return pro(nums,1,n);
    }
};