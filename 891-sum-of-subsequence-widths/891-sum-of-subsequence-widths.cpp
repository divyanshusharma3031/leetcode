const int mod=1e9+7;
class Solution {
public:
    vector<long long> v; 
    long long cal(long long x)
    {
        if(x<v.size())
        {
            return v[x];
        }
        while (v.size() <= x)
        {
            v.push_back((v.back() << 1) % 1000000007);
        }
        return v[x];
    }
    int sumSubseqWidths(vector<int>& nums) {
        long long ans=0;
        v.push_back(1);
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            ans=(ans+((nums[i]-nums[n-i-1])*cal(i))%mod)%mod;
        }
        return ans;
    }
    
};