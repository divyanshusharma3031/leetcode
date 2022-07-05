class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> len(n+1,1);
        vector<int> hash(n+1,0);
        for(int i=0;i<n;i++)
        {
            hash[i]=i;
            int mx=0;
            for(int j=0;j<i;j++)
            {
                if((nums[i]%nums[j]==0))
                {
                    if(mx<len[j])
                    {
                         mx=max(mx,len[j]);
                         hash[i]=j;
                    }
                   
                }
            }
            len[i]+=mx;
        }
        int mx=0;
        int idx=-1;
        for(int i=0;i<n;i++)
        {
            if(mx<len[i])
            {
                mx=len[i];
                idx=i;
            }
        }
        while(hash[idx]!=idx)
        {
            ans.push_back(nums[idx]);
            idx=hash[idx];
        }
        ans.push_back(nums[idx]);
        reverse(ans.begin(),ans.end());
        // cout<<idx<<"\n";
        return ans;
    }
};