class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bsp=-prices[0];
        int ssp=0;
        int csp=0;
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
            bsp=max(bsp,csp-prices[i]);
            csp=max(ssp,csp);
            ssp=max(ssp,bsp+prices[i]);
        }
        return ssp;
    }
};