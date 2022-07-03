class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX;
        int profit=0;
        int n=prices.size();
        vector<int> arr=prices;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,arr[i]);
            profit=max(profit,arr[i]-mn);
        }
        return profit;
    }
};