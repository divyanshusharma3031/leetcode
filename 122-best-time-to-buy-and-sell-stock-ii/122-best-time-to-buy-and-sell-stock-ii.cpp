class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ssp=0;
        int ccp=-prices[00];
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            ssp=max(ssp,ccp+prices[i]);
            ccp=max(ccp,ssp-prices[i]);
        }
        return ssp;
    }
};