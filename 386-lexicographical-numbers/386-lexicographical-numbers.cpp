class Solution {
public:
    vector<int> lexicalOrder(int n) {
        
        if(n<=9)
        {
            vector<int> ans;
            for(int i=1;i<=n;i++)
            {
                ans.push_back(i);
            }
            return ans;
        }
        vector<int> ans(n,0);
        int cur=1;
        for(int i=0;i<n;i++)
        {
            ans[i]=cur;
            if(cur*10<=n)
            {
                cur=cur*10;
            }
            else
            {
                if(cur>=n)
                {
                    cur/=10;
                }
                cur++;
                while (cur % 10 == 0)
                    cur /= 10;
            }
        }
        return ans;
    }
};