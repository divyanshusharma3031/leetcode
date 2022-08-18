class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mpp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto it:mpp)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int x=n;
        for(int i=0;i<v.size();i++)
        {
            n=n-v[i].first;
            if(n<=x/2)
            {
                return i+1;
            }
        }
        return n/2;
    }
};