class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2)
        {
            return 0;
        }
        vector<int> arr=nums;
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            ans=max(ans,abs(arr[i]-arr[i+1]));
        }
        return ans;
    }
};