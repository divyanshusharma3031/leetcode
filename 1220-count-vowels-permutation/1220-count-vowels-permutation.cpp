class Solution {
public:
     unordered_map<int,vector<int>> mpp;
    vector<vector<int>> dp;
    const int mod=1e9+7;
    int count(int n,char c)
    {
        if(n==0)
        {
            return 1;
        }
        if(dp[n][c-'a']!=-1)
        {
            return dp[n][c-'a'];
        }
        long long ans=0;
        for(auto i:mpp[c])
        {
            ans=(ans+count(n-1,i))%mod;
        }
        return dp[n][c-'a']=ans;
    }
    int countVowelPermutation(int n) {
        vector<int> v={'a','e','i','o','u'};
        mpp['a'].push_back('e');
        mpp['e'].push_back('a');
        mpp['e'].push_back('i');
        mpp['i'].push_back('a');
        mpp['i'].push_back('e');
        mpp['i'].push_back('o');
        mpp['i'].push_back('u');
        mpp['o'].push_back('i');
        mpp['o'].push_back('u');
        mpp['u'].push_back('a');
        long long ans=0;
        dp.resize(n+1,vector<int>(26,-1));
        for(int i=0;i<v.size();i++)
        {
            ans=(ans+count(n-1,v[i]))%mod;
        }
        return ans%mod;
    }
};