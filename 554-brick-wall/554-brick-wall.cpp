class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        vector<vector<int>> d;
        for(int i=0;i<wall.size();i++)
        {
            vector<int> v(wall[i].size(),0);
            v[0]=wall[i][0];
            for(int j=1;j<wall[i].size();j++)
            {
                v[j]=v[j-1]+wall[i][j];
                // cout<<v[j]<<" ";
            }
            // cout<<"\n";
            d.push_back(v);
        }
        int mx=0;
        // cout<<d.size()<<" ";
        map<int,int> mpp;
        for(int i=0;i<d.size();i++)
        {
            for(int j=0;j<d[i].size()-1;j++)
            {
                mpp[d[i][j]]++;
            }
        }
        for(auto it:mpp)
        {
            mx=max(it.second,mx);
        }
        return wall.size()-mx;
    }
};