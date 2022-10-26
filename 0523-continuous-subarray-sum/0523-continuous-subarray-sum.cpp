class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int n=nums.size();
        vector<int> sums(n,0);
        sums[0]=nums[0]%k;
        for(int i=1;i<n;i++)
        {
            sums[i]=(sums[i-1]+nums[i])%k;
            if(sums[i]==0)
            {
                return true;
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<sums[i]<<" ";
        // }
        mpp[sums[0]]=0;
        for(int i=0;i<n;i++)
        {
            
            if(mpp.count(sums[i]))
            {
                // cout<<sums[i]<<" "<<mpp[sums[i]]<<" ";
                if((i-mpp[sums[i]])>1)
                {
                    return true;
                }
            }
            else
            {
                mpp[sums[i]]=i;
            }
        }
        return false;
    }
};