class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        vector<long long> ans;
        int m=queries.size();
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<long long> nu;
        for(auto it:nums)
        {
            nu.push_back(it);
        }
        vector<long long> pref=nu;
        for(int i=1;i<n;i++)
        {
            pref[i]=pref[i-1]+pref[i];
        }
        for(int i=0;i<m;i++)
        {
            long long s=0;
            long long x=lower_bound(nums.begin(),nums.end(),queries[i])-nums.begin();//first position of element >=nums[i];
            x--;
            if(x>=0)
            {
                s=s+queries[i]*(x+1)-pref[x];
            }
            auto it=upper_bound(nums.begin(),nums.end(),queries[i]);
            if(it==nums.end())
            {
                //do nothing
            }
            else
            {
                long long y=it-nums.begin();
                if(y>=1)
                    s=s+pref[n-1]-pref[y-1]-(n-y)*queries[i];
                else
                    s=s+pref[n-1]-(n-y)*queries[i];
                
            }
            ans.push_back(s);
        }
        return ans;
    }
};