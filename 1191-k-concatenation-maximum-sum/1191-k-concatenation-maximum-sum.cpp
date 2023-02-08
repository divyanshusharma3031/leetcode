class Solution {
    typedef long long ll;
public:
    long long maxSubArray(vector<int> &arr)
    {
        ll ans = INT_MIN;
        ll temp = 0;
        for (auto i : arr)
        {
            temp = temp + i;
            if (ans < temp)
            {
                ans = temp;
            }
            if (temp < 0)
            {
                temp = 0;
            }
        }
        return max(ans,0ll);
    }
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        vector<int> newarr=arr;
        ll s=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            newarr.push_back(arr[i]);
            s=s+arr[i];
        }
        ll x=k;
        const int mod=1e9+7;
        
        if(k==1)
        {
            return maxSubArray(arr);
        }
        long long ans=maxSubArray(newarr);
        long long w=((x-2)*s)%mod;
        return max((ans+w)%mod,ans%mod);
    }
};