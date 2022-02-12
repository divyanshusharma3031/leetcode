class Solution {
public:
    const int mod=1e9+7;
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        long long ans=0;
        stack<pair<long long,long long>> s1;
        stack<pair<long long,long long>> s2;
        vector<long long> l(n,0);
        vector<long long> r(n,0);
        for(int i=0;i<n;i++)
        {
            int count=1;
            while(!s1.empty() && s1.top().first>arr[i])
            {
                count+=s1.top().second;
                s1.pop();
            }
            s1.push({arr[i],count});
            l[i]=count;
        }
        for(int i=n-1;i>=0;i--)
        {
            // cout<<i<<"\n";
            int count=1;
            while(!s2.empty() && s2.top().first>=arr[i])
            {
                count+=s2.top().second;
                s2.pop();
            }
            s2.push({arr[i],count});
            r[i]=count;
        }
        for(int i=0;i<n;i++)
        {
            ans=(ans+((long long)(arr[i]))*(l[i])*(r[i]))%mod;
            // cout<<ans<<"\n";
        }
        return ans;
    }
};