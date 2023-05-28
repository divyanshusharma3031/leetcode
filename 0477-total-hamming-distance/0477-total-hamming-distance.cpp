class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
//         will give TLE or will barely pass
        int n=nums.size();
        vector<int> bitmap(32,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<32;j++)
            {
                if((nums[i]&(1<<j)))
                {
                    bitmap[j]++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<32;i++)
        {
            ans=ans+(bitmap[i])*(n-bitmap[i]);
        }
        return ans;
    }
};