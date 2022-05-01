class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int n=prices.size();
        vector<int> suff(n+1,0);
        int ele=INT_MIN;
        for(int i=prices.size()-1;i>=0;i--)
        {
            ele=max(ele,prices[i]);
            suff[i]=ele;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,suff[i]-prices[i]);
        }
        return ans;
    }
};