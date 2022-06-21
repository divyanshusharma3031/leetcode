unordered_map<int,int> dp;
class Solution {
public:
    
    int calc(int n)
    {
        if(dp[n])
        {
            return dp[n];
        }
        if(n==1)
        {
            return 1;
        }
        
        if(n%2==0)
        {
            return dp[n]=1+calc(n/2);
        }
        return dp[n]=1+calc(3*n+1);
    }
    static bool compare(pair<int,int> &p1,pair<int,int> &p2)
    {
        if(p1.second==p2.second)
        {
            return p1.first<p2.first;
        }
        return p1.second<p2.second;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> ans;
        for(int i=lo;i<=hi;i++)
        {
            ans.push_back({calc(i),i});
        }
        sort(ans.begin(),ans.end());
        return ans[k-1].second;
    }
};