class Solution {
public:
    bool isRobotBounded(string s) {
         vector<vector<int>> d = {{0, 1}, {1, 0}, {0, -1}, { -1, 0}};
        int x=0;
        int y=0;
        int i=0;
        int n=s.length();
        for(int j=0;j<n;j++)
        {
            if(s[j]=='L')
            {
                i=(i+3)%4;
            }
            else if(s[j]=='R')
            {
                i=(i+1)%4;
            }
            else
            {
                x=x+d[i][0];
                y=y+d[i][1];
            }
        }
        return x == 0 && y == 0 || i > 0;
    }
};