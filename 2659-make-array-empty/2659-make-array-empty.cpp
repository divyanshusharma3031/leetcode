class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>& nums) {
        long long ans=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            pq.push({nums[i],i});
        }
        int cs=0;
        int cls=0;
        int ls=0;
        while(!pq.empty())
        {
            auto it=pq.top();
            pq.pop();
            if(cs<=it.second)
            {
                ans=ans+it.second-cs+1;
                cls++;
                cs=it.second+1;
            }
            else
            {
                ans=ans+it.second+(n-cs)+1;
                ans-=ls;
                cs=it.second+1;
                ls+=cls;
                cls=1;
            }
        }
        return ans-(cs-cls);
    }
};