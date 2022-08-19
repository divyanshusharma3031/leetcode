class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto it:nums)
        {
            mpp[it]++;
        }
        unordered_map<int,int> tails;
        for(auto it:nums)
        {
            if(mpp[it]==0)
            {
                // cout<<it<<"\n";
                continue;
            }
            mpp[it]--;
            if(tails[it-1]>0)
            {
                tails[it-1]--;
                tails[it]++;
            }
            else if(mpp[it+1]>0 && mpp[it+2]>0)
            {
                mpp[it+1]--;
                mpp[it+2]--;
                tails[it+2]++;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};