class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n=plantTime.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({growTime[i],plantTime[i]});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        int prev=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            prev+=v[i].second;
            int ans=prev+v[i].first+1;
            mx=max(mx,ans);
        }
        return mx-1;
    }
};