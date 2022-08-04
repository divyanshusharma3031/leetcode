class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int ans=1e9;
        int s=0;
        int n=nums.size();
        while(j<n)
        {
            s+=nums[j];
            if(s>=target)
            {
                while(i<n && (s-nums[i])>=target)
                {
                    s=s-nums[i];
                    i++;
                }
                ans=min(ans,j-i+1);
            }
            j++;
        }
        if(s>=target)
        {
            ans=min(ans,j-i+1);
        }
        if(ans==1e9)
        {
            return 0;
        }
        return ans;
    }
};