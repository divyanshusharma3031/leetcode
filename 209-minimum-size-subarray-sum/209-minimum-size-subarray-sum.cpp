class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // O(nlogn) binary search approach;
        int ans=INT_MAX;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            nums[i]=nums[i-1]+nums[i];
        }
        for(int i=n-1;i>=0 && nums[i]>=target;i--)
        {
            int j=upper_bound(nums.begin(),nums.end(),nums[i]-target)-nums.begin();
            ans=min(ans,i-j+1);
        }
        return ans==INT_MAX?0:ans;
    }
};
// O(n) variable length sliding window
        // int i=0;
        // int j=0;
        // int ans=1e9;
        // int s=0;
        // int n=nums.size();
        // while(j<n)
        // {
        //     s+=nums[j];
        //     if(s>=target)
        //     {
        //         while(i<n && (s-nums[i])>=target)
        //         {
        //             s=s-nums[i];
        //             i++;
        //         }
        //         ans=min(ans,j-i+1);
        //     }
        //     j++;
        // }
        // if(s>=target)
        // {
        //     ans=min(ans,j-i+1);
        // }
        // if(ans==1e9)
        // {
        //     return 0;
        // }
        // return ans;