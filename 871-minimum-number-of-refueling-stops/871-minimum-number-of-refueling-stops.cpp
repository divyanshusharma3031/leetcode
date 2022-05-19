class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;
        vector<pair<int,int>> v;
        int n=stations.size();
        if(n==0)
        {
            if(startFuel<target)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
        for(int i=0;i<n;i++)   
        {
            v.push_back({stations[i][0],stations[i][1]});
        }
        sort(v.begin(),v.end());
        long long x=startFuel;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            // cout<<x<<"\n";
            if(x>=v[i].first)
            {
                pq.push(v[i].second);
            }
            else
            {
                while(!pq.empty() && x<v[i].first)
                {
                    x+=pq.top();
                    pq.pop();
                    ans++;
                }
                if(x<v[i].first)
                {
                    return -1;
                }
                pq.push(v[i].second);
            }
        }
        while(!pq.empty() && x<target)
        {
            x+=pq.top();
            pq.pop();
            ans++;
        }
        if(x<target)
        {
            return -1;
        }
        return ans;
    }
};