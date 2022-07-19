class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> mpp;
        for(auto x:nums)
        {
            mpp[x]++;
        }
        int s=0;
        for(auto it:mpp)
        {
            int x=it.first;
            int y=it.second;
            if(y==1)
            {
                s+=x;
            }
        }
        return s;
    }
};