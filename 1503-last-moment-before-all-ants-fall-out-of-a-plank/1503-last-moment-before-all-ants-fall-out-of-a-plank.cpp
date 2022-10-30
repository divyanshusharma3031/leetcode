class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ls=left.size();
        int rs=right.size();
//         need to find the ant which will take the maximum time to fall
        int x1=-1;
        for(int i=0;i<ls;i++)
        {
            x1=max(x1,left[i]);
        }
        for(int i=0;i<rs;i++)
        {
            x1=max(x1,n-right[i]);
        }
        return x1;
    }
};