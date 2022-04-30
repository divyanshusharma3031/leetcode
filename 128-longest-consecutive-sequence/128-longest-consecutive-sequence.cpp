class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0)
        {
            return 0;
        }
        int ans=1;
        
        int c=0;
        
        map<int,int> mpp;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        int ele=-1;
        for(auto it:mpp)
        {
            if(c==0)
            {
                ele=it.first;
                c++;
                continue;
            }
            if((it.first-1)==ele)
            {
                ele=it.first;
                c++;
            }
            else
            {
                ans=max(ans,c);
                c=1;
                ele=it.first;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};