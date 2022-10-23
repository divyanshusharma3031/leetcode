class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int x=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            x=x^(nums[i])^(i+1);
        }
        unordered_map<int,int> mpp;
        int b=0;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]]==2)
            {
                b=nums[i];
                break;
            }
        }
        return {b,x^b};
    }
};