class Solution {
public:
    bool hasGroupsSizeX(vector<int>& arr) {
        map<int,int> mpp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
        }
        // sort(arr.begin(),arr.end());
        int x=mpp[arr[0]];
        for(auto it:mpp)
        {
            x=__gcd(x,it.second);
        }
        if(x==1)
        {
            return false;
        }
        return true;
    }
};