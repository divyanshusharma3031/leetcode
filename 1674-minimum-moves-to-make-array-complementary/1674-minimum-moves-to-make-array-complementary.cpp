class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        // we can have maximum of two moves for a pair
        // minimum of zero moves
        vector<int> arr(2*limit+2,0);
        int n=nums.size();
        for(int i=0;i<n/2;i++)
        {
            int l=min(nums[i],nums[n-i-1])+1;
            int r=max(nums[i],nums[n-i-1])+limit+1;
            arr[2]+=2;
            arr[l]--;
            arr[nums[i]+nums[n-i-1]]--;
            arr[nums[i]+nums[n-i-1]+1]++;
            arr[r]++;
        }
        int ans=1e9;
        for(int i=2;i<2*limit+2;i++)
        {
            arr[i]+=arr[i-1];
            ans=min(ans,arr[i]);
        }
        return ans;
    }
};