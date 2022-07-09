class Solution {
public:
    vector<int> dp;
    int maxres(int i,int k,vector<int> &nums)
    {
        int n=nums.size();
        if(i>=n)
        {
            return -1e9;
        }
        if(i==n-1)
        {
            return nums[n-1];
        }
        if(dp[i]!=(-1e9))
        {
            return dp[i];
        }
        int mx=-1e9;
        for(int j=i+1;j<=min(i+k,n-1);j++)
        {
            mx=max(mx,nums[i]+maxres(j,k,nums));
        }
        return dp[i]=mx;
    }
    int maxResult(vector<int>& nums, int k) {
        int n=nums.size();
        dp.resize(n+1,-1e9);
        dp[n-1]=nums[n-1];
        dp[n]=-1e9;
        multiset<int> s;
        s.insert(nums[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            int x=*s.rbegin();
            if((n-1-i)>=k)
            {
                s.erase(s.find(dp[i+k]));
            }
            dp[i]=nums[i]+x;
            s.insert(dp[i]);
        }
        return dp[0];
    }
};