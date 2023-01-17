class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans=0;
        int n=nums.size();
        map<int,int> mpp;
        int c=0;
        int i=0;
        int j=0;
        while(j<n)
        {
            mpp[nums[j]]++;
            c+=mpp[nums[j]]-1;
            while(i<j && c>=k)
            {
                ans=ans+(n-j);
                mpp[nums[i]]--;
                c=c-mpp[nums[i]];
                i++;
            }
            j++;
        }
        return ans;
    }
};