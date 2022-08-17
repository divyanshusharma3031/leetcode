class Solution {
public:
    vector<int> avoidFlood(vector<int>& arr) {
        unordered_map<int,int> mpp;
        int n=arr.size();
        vector<int> ans(n,-1);
        set<int> s;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                s.insert(i);
            }
            else if(mpp.find(arr[i])!=mpp.end())
            {
                int x=mpp[arr[i]];
                if(s.empty())
                {
                    return {};
                }
                auto y=s.lower_bound(x);
                if(y==s.end())
                {
                    return {};
                }
                ans[*y]=arr[i];
                s.erase(y);
                mpp[arr[i]]=i;
            }
            else
            {
                mpp[arr[i]]=i;
            }
            
        }
        for(auto it:s)
        {
            ans[it]=1;
        }
        return ans;
    }
};