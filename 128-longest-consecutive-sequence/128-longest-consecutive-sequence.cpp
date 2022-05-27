class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        int prev=-(1e9-3);
        int e=-(1e9-3);
        int l=1;
        int ans=1;
        for(auto it:mpp)
        {
            
            if(prev==e)
            {
                prev=it.first;
            }
            else
            {
                int w=it.first-1;
                if((w)==prev)
                {
                    prev=it.first;
                    l++;
                }
                else
                {
                    ans=max(l,ans);
                    l=1;
                    prev=it.first;
                }
            }
            // cout<<it.first<<" "<<l<<"\n";
        }
        ans=max(l,ans);
        return ans;
    }
};