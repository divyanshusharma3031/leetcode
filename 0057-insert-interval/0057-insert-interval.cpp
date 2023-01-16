class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> v;
        sort(intervals.begin(),intervals.end());
        int x=newInterval[0];
        int y=newInterval[1];
        int n=intervals.size();
        bool b=true;
        for(int i=0;i<n;i++)
        {
            b=true;
            if(x<intervals[i][0] && y<intervals[i][0])
            {
                v.push_back({x,y});
                x=intervals[i][0];
                y=intervals[i][1];
            }
            else if(x>intervals[i][0] && x>intervals[i][1])
            {
                v.push_back({intervals[i][0],intervals[i][1]});
            }
            else if(x>=intervals[i][0] || y>=intervals[i][0])
            {
                x=min(intervals[i][0],x);
                y=max(intervals[i][1],y);
            }
            else
            {
                v.push_back({x,y});
                x=intervals[i][0];
                y=intervals[i][1];
                b=false;
            }
        }
        if(b)
            v.push_back({x,y});
        return v;
    }
};