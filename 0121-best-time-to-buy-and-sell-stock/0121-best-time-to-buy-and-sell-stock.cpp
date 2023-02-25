class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int mn=INT_MAX;
        int mx=0;
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            mn=min(arr[i],mn);
            ans=max(ans,arr[i]-mn);

        }
        return ans;
    }
};