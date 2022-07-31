class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int p1=nums[n-4]-nums[0];
        int p2=nums[n-3]-nums[1];
        int p3=nums[n-2]-nums[2];
        int p4=nums[n-1]-nums[3];
        return min({p1,p2,p3,p4});
    }
};