class Solution {
public:
    typedef pair<int,int> pii;
    const int mod=1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        priority_queue<pii,vector<pii>,greater<pii>> pq;
        for(int i=0;i<n;i++)
        {
            pq.push({nums[i],i+1});
        }
        int ans=0;
        for(int i=1;i<=right;i++)
        {
            pii t=pq.top();
            pq.pop();
            if(i>=left)
            {
                ans=(ans+t.first)%mod;
            }
            if(t.second<n)
            {
                t.first+=nums[t.second++];
                pq.push(t);
            }
        }
        return ans;
    }
};