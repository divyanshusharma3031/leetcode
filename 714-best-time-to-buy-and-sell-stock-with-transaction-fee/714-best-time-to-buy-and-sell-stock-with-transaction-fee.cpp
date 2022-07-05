class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
         int n=prices.size();
        vector<int> ahead(n+1,0);
        for(int i=n-1;i>=0;i--)
        {
            vector<int> curr(2,0);
            for(int j=0;j<2;j++)
            {
                if(j)
                {
                    curr[j]=max(-prices[i]+ahead[0],ahead[1]);
                }
                else
                {
                    curr[j]=max(prices[i]+ahead[1]-fee,ahead[0]);
                }
            }
            ahead=curr;
        }
        return ahead[1];
    }
};