class Solution {
public:
    typedef vector<int> pi;
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        unordered_map<string,int> mpp;
        map<pi,int> mpp1;
        map<pi,int> mpp2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(img1[i][j]==1)
                {
                    mpp1.insert({{i,j},1});
                }
                if(img2[i][j])
                {
                    mpp2.insert({{i,j},1});
                }
            }
        }
        for(auto &pa:mpp1)
        {
            for(auto &pb:mpp2)
            {
                string s=to_string(pa.first[0]-pb.first[0])+" "+to_string(pa.first[1]-pb.first[1]);
                mpp[s]++;
            }
        }
        int c=0;
        for(auto it:mpp)
        {
            c=max(c,it.second);
        }
        return c;
    }
};