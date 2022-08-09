class Solution {
public:
    unordered_map<int,int> mpp;
    unordered_map<int,int> dp;
    const int mod=1e9+7;
    long long count(int i,vector<int>& arr)
    {
        if(dp.count(i))
        {
            return dp[i];
        }
        long long c=1;
        for(int j=0;j<arr.size();j++)
        {
            if(i%arr[j])
            {
                continue;
            }
            if(mpp[i/arr[j]])
            {
                c=(c+count(arr[j],arr)*(count(i/arr[j],arr)))%mod;
            }
        }
        return dp[i]=c;
    }
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
        }
        long long ans=0;
        for(int i=0;i<arr.size();i++)
        {
            ans=(ans+count(arr[i],arr))%mod;
        }
        return ans;
    }
};