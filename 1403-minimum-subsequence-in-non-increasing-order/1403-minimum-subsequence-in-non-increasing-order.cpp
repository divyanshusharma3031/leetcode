class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long s=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
        }
        int pre=0;
        int i;
        for(i=0;i<n;i++)
        {
            pre+=nums[i];
            if(pre>=(s-pre))
            {
                break;
            }
        }
        
        vector<int> ans;
        while(i<n)
        {
            ans.push_back(nums[i]);
            i++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};