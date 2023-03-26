class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        //we will make the elements equal to its median
        int x=n/2;
        long long s=0;
        int ans=0;
        for(int i=0;i<x;i++)
        {
            s=s+nums[i];
        }
        ans=ans+nums[x]*(x)-s;
        s=0;
        for(int i=x+1;i<n;i++)
        {
            s=s+nums[i];
        }
        ans=ans+s-nums[x]*(n-x-1);
        return ans;
    }
};