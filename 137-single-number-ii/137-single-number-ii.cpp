class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // first with extra space
        // sc:o(n) t.c:o(n)
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        vector<int> ans;
        for(auto it:mpp)
        {
            if(it.second==1)
            {
                return it.first;
            }
        }
        return -1;
    }
};