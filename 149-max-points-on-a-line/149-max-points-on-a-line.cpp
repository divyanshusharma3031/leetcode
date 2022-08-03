class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans=1;//two points are always in same straight line
        
        int n=points.size();
        for(int i=0;i<n;i++)
        {
            map<pair<int,int>,int> mpp;
            for(int j=i+1;j<n;j++)
            {
                int dx=points[j][0]-points[i][0];
                int dy=points[j][1]-points[i][1];
                int g=__gcd(dy,dx);
                mpp[{dy/g,dx/g}]++;
            }
            for(auto it:mpp)
            {
                ans=max(ans,it.second+1);
            }
        }
        
        return ans;
    }
};