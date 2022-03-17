class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<pair<pair<int,int>,int>> v;
        for(int i=0;i<profit.size();i++)
        {
            v.push_back({{endTime[i],startTime[i]},profit[i]});
        }
        sort(v.begin(),v.end());
        map<int,int> dp={{0,0}};
        
        int ans=0;
        
        for(auto it:v)
        {
            int cur=prev(dp.upper_bound(it.first.second))->second+it.second;
            if(cur>dp.rbegin()->second)
            {
                dp[it.first.first]=cur;
            }
        }
        return dp.rbegin()->second;
    }
};