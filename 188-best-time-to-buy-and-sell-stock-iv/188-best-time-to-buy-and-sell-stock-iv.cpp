class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        if(n==0)
        {
            return 0;
        }
        if(k>=n/2)
        {
            int T_i0=0;
            int T_i1=-prices[0];
            for(int i=1;i<n;i++)
            {
                int temp=T_i0;
                T_i0=max(T_i0,T_i1+prices[i]);
                T_i1=max(T_i1,temp-prices[i]);
            }
            return T_i0;
        }
        int T_i0[k+1];
        for(int i=0;i<=k;i++)
        {
            T_i0[i]=0;
        }
        int T_i1[k+1];
        for(int i=0;i<=k;i++)
        {
            T_i1[i]=INT_MIN;
        }
        T_i0[0]=0;
        T_i1[0]=-prices[0];
        for(int i=0;i<n;i++)
        {
            for(int j=k;j>0;j--)
            {
                T_i0[j]=max(T_i0[j],T_i1[j]+prices[i]);
                T_i1[j]=max(T_i1[j],T_i0[j-1]-prices[i]);
            }
        }
        return T_i0[k];
    }
};