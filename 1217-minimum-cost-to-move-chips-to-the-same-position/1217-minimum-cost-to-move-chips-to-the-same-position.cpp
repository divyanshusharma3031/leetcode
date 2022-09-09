class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n=position.size();
        int ans=1e9;
        for(int i=0;i<n;i++)
        {
            int p=i;
            int s=0;
            for(int j=0;j<n;j++)
            {
                if((position[j]-position[i])%2==0)
                {
                    
                }
                else
                {
                    s++;
                }
            }
            ans=min(ans,s);
        }
        return ans;
    }
};