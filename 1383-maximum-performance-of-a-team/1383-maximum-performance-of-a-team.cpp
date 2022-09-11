class Solution {
public:
    const int mod=1e9+7;
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({efficiency[i],speed[i]});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        long long s=0;
        long long ans=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++)
        {
            s=(s+v[i].second);
            pq.push(v[i].second);
            if(pq.size()>k)
            {
                s=s-pq.top();
                pq.pop();
            }
            long long x=v[i].first;
            ans=max(ans,(s*x));
        }
        return ans%mod;
    }
};

// 2 10 3 1 5 8
// 5  4 3 9 7 2
// 