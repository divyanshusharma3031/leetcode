class Solution {
public:
    bool check(int mid,vector<vector<int>> &points)
    {
        int c=1;
        int n=points.size();
        int x=points[n-1][0];
        for(int i=n-2;i>=0;i--)
        {
            if(x<=points[i][1])
            {
                
            }
            else
            {
                c++;
                x=points[i][0];
            }
        }
        return c<=mid;
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int c=1;
        int n=points.size();
        sort(points.begin(),points.end());
        int x=points[n-1][0];
        
        for(int i=n-2;i>=0;i--)
        {
            if(x<=points[i][1])
            {
                
            }
            else
            {
                c++;
                x=points[i][0];
            }
        }
        return c;
    }
};