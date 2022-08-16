class Solution {
public:
    typedef long long ll;
    const int mod=1e9+7;
    int countPairs(vector<int>& arr) {
        long long ans=0;
        map<ll,ll> mpp;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                mpp[arr[i]]++;
                continue;
            }
            ll x=ceil(log2(arr[i]+1));
            ll w=ceil(pow(2,x));
            ll f=w-arr[i];
            ll y=ceil(log2(arr[i]));
            ll z=ceil(pow(2,y));
            ll f2=z-arr[i];
            if(mpp[f])
            {
                ans=(ans+mpp[f])%mod;
            }
            if(mpp[f2] && f!=f2)
            {
                ans=(ans+mpp[f2])%mod;
            }
            mpp[arr[i]]++;
        }
        return ans;
    }
};