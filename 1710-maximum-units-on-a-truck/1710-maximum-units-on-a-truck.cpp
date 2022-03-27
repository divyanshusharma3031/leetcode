class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int mx=0;
        
        vector<pair<int,int>> v;
        
        for(int i=0;i<boxTypes.size();i++)
        {
            v.push_back({boxTypes[i][1],boxTypes[i][0]});    
        }
        
        sort(v.begin(),v.end());
        
        int n=v.size();
        
        for(int i=n-1;i>=0;i--)
        {
            // cout<<truckSize<<" "<<v[i].second<<"\n";
            // cout<<v[i].first<<" "<<v[i].second<<"\n";
            if((truckSize-v[i].second)>=0)
            {
                truckSize=truckSize-v[i].second;
                mx=mx+v[i].first*v[i].second;
                // cout<<mx<<"\n";
            }
            else
            {
                mx+=v[i].first*truckSize;
                break;
            }
        }
        return mx;
    }
};