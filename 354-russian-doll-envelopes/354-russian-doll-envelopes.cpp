class Solution {
public:
    static bool compare(pair<int,int> p1,pair<int,int> p2)
    {
        if(p1.first==p2.first)
        {
            return p1.second>p2.second;
        }
        return p1.first<p2.first;
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        vector<pair<int,int>> v;
        for(int i=0;i<envelopes.size();i++)
        {
            v.push_back({envelopes[i][0],envelopes[i][1]});
        }
        
        sort(v.begin(),v.end(),compare);
        
        vector<int> res;
        res.push_back(v[0].second);
        
        int n=envelopes.size();
        
        for(int i=1;i<n;i++)
        {
            auto it=(lower_bound(res.begin(),res.end(),v[i].second));
            
            if(it==res.end())
            {
               res.push_back(v[i].second);
            }
            else
            {
                *it=v[i].second;
            }   
        }
        return res.size();
    }
};