class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        vector<pair<int,int>> v;
        
        int n=position.size();
        
        for(int i=0;i<n;i++)
        {
            v.push_back({position[i],speed[i]});
        }
        
        sort(v.begin(),v.end());
        
        stack<double> s;
        
        for(int i=0;i<n;i++)
        {
            double t=double(target-v[i].first)/(v[i].second);
            // cout<<t<<"\n";
            while(!s.empty() && t>=s.top())
            {
                s.pop();
            }
            s.push(t);
        }
        return s.size();
    }
};