class Solution {
public:
    const int mod=1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> arr;
        // int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int s=0;
            for(int j=i;j<n;j++)
            {
                s=(s+nums[j])%mod;
                arr.push_back(s);
            }
        }
        sort(arr.begin(),arr.end());
        int x=left-1;
        int s=0;
        for(int i=x;i<right;i++)
        {
            s=(s+arr[i])%mod;
        }
        return s;
    }
};