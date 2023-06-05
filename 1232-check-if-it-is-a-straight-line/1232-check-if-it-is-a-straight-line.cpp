class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        set<pair<int,int>> s;
        int n=coordinates.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    int x=coordinates[i][0]-coordinates[j][0];
                    int y=coordinates[i][1]-coordinates[j][1];
                    int gcd=__gcd(x,y);
                    s.insert({x/gcd,y/gcd});
                }
            }
        }
        return s.size()==1;
    }
};