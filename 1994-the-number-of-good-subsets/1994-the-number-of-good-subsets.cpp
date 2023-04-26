int power(long long x, long long int y, int p=1e9+7)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
class Solution {
public:
    const int mod=1e9+7;
    unordered_map<int,int> pos={{2,0},{3,1},{5,2},{7,3},{11,4},{13,5},{17,6},{19,7},{23,8},{29,9}};
    long long dp[20][2097];
    map<long long,long long> freq;
    int solve(int i,vector<long long> &arr,int mask)
    {
        int n=arr.size();
        if(i==n)
        {
            return mask!=0;
        }
        if(dp[i][mask]!=-1)
        {
            return dp[i][mask];
        }
        bool b=true;
        long long ele=arr[i];
        int copy=mask;
        for(int j=2;j<=30;j++)
        {
            while(ele%j==0)
            {
                ele=ele/j;
                if((mask&(1<<pos[j]))!=0)
                {
                    b=false;
                }
                if(!b)
                {
                    break;
                }
                if(pos.find(j)!=pos.end())
                    copy=copy|(1<<pos[j]);
            }
        }
        long long take=0;
        if(b)
        {
            take=((freq[arr[i]])*(solve(i+1,arr,copy)))%mod;
        }
        long long nottake=solve(i+1,arr,mask)%mod;
        return dp[i][mask]=(take+nottake)%mod;
    }
    int numberOfGoodSubsets(vector<int>& nums) {
        set<int> primes={2,3,5,7,11,13,17,19,23,29,6,10,14,22,26,15,21,30};
        long long count=0;
        memset(dp,-1,sizeof(dp));
        for(auto it:nums)
        {
            if(it==1)
            {
                count++;
            }
            if(primes.find(it)!=primes.end())
            {
                freq[it]++;
            }
        }
        vector<long long> filtered;
        int mask=0;
        for(auto it:freq)
        {
            filtered.push_back(it.first);
        }
        count=power(2,count);
        return (solve(0,filtered,mask)*count)%mod;
    }
};