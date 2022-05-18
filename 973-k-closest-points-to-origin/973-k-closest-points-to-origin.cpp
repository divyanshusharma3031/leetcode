class Solution {
public:
    double distance(int x1,int x2,int y1,int y2)
    {
        double a1=sqrt(double(pow(x1-x2,2))+double(pow(y1-y2,2)));
        return a1;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,pair<int,int>>> q;
        for(int i=0;i<points.size();i++)
        {
            q.push({distance(points[i][0],0,points[i][1],0),{points[i][0],points[i][1]}});
            if(q.size()>k)
            {
                q.pop();
            }
        }
        vector<vector<int>> ans;
        while(!q.empty())
        {
            ans.push_back({q.top().second.first,q.top().second.second});
            q.pop();
        }
        return ans;
    }
};