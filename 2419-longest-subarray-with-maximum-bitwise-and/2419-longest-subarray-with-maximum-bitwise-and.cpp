class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int x=*max_element(nums.begin(),nums.end());
        int ans=1;
        int len=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==x)
            {
                len++;
                ans=max(ans,len);
            }
            else
            {
                len=0;
            }
        }
        return ans;
    }
};