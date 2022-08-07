class Solution {
public:
    int findtarget(vector<int>& nums, int target,int n)
    {
        if(n==0)
        {
            if(target==0 && nums[0]==0)
            {
                return 2;
            }
            if(target==0 || target==nums[0])
            {
                return 1;
            }
            return 0;
        }
        if(nums[n]>target)
        {
            return findtarget(nums,target,n-1);;
        }
        return findtarget(nums,target-nums[n],n-1)+findtarget(nums,target,n-1);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            s=s+nums[i];
        }
        if((target+s)%2!=0)
        {
            return 0;
        }
        int s1=(target+s)/2;
        // cout<<s1<<"\n";
        return findtarget(nums,s1,n-1);
    }
};
// s1-s2=target
// s1+s2=s;
// 2*s1=target+s;
// s1=(target+s)/2;
