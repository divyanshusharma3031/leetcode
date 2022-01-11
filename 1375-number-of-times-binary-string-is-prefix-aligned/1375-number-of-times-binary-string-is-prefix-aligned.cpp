class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int n=flips.size();
        set<int> s;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            s.insert(flips[i]);
            if(s.size()==*s.rbegin())
            {
                ans++;
            }
        }
        return ans;
    }
};