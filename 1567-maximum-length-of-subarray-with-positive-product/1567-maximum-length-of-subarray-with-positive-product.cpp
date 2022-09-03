class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        // zero is a break point reset length after zero.
        
        int n=nums.size();
        
        vector<int> pos(n,0);
        
        vector<int> neg(n,0);
        int ans=0;
        pos[0]=1?nums[0]>0:0;
        neg[0]=1?nums[0]<0:0;
        ans=max(ans,pos[0]);
        for(int i=1;i<n;i++)
        {
            if(nums[i]>0)
            {
                pos[i]=1+pos[i-1];
                neg[i]=neg[i-1]>0?1+neg[i-1]:neg[i-1];
            }
            else if(nums[i]<0)
            {
                pos[i]=neg[i-1]>0 ? 1+neg[i-1] : 0;
                neg[i]=1+pos[i-1];
            }
            ans=max(ans,pos[i]);
        }
        return ans;
    }
};