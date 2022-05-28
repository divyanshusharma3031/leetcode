class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        map<int,int> mpp;
        int se=0;
        for(int i=0;i<wall.size();i++)
        {
            int s=0;
            for(int j=0;j<wall[i].size()-1;j++)
            {
                s+=wall[i][j];
                mpp[s]++;
            }
            se=s;
        }
        int mx=0;
        for(auto it:mpp)
        {
            mx=max(it.second,mx);
        }
        return wall.size()-mx;
    }
};