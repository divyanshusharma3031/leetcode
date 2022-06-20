class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int T_i20=0;
        int T_i21=-prices[0];
        int T_i10=0;
        int T_i11=-prices[0];
        for(int i=1;i<n;i++)
        {
            T_i20=max(T_i20,T_i21+prices[i]);
            T_i21=max(T_i21,T_i10-prices[i]);
            T_i10=max(T_i10,T_i11+prices[i]);
            T_i11=max(T_i11,-prices[i]);
        }
        return T_i20;
    }
};