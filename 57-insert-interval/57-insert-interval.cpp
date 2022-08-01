class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int l=newInterval[0];
        int r=newInterval[1];
        int n=intervals.size();
        for(int i=0;i<n;i++)
        {
            if(r<intervals[i][0])
            {
                ans.push_back({l,r});
                for(int j=i;j<n;j++)
                {
                    ans.push_back({intervals[j][0],intervals[j][1]});
                }
                return ans;
            }
            else if(l>intervals[i][1])
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                newInterval={min(l,intervals[i][0]),max(r,intervals[i][1])};
                l=newInterval[0];
                r=newInterval[1];
            }
        }
        ans.push_back(newInterval);
        return ans;
    }
};