class Solution
{
public:
    vector<long long> store;
    long long cal(int x)
    {
        if (x < store.size())
        {
            return store[x];
        }
        while (store.size() <= x)
        {
            store.push_back((store.back() << 1) % 1000000007);
        }
        return store[x];
    }
    int sumSubseqWidths(vector<int> &nums)
    {
        store.push_back(1);
        long long ans = 0;
        int i = 0;
        int n = nums.size();
        int j = n - 1;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++)
        {
            ans=(ans+((nums[i]-nums[n-i-1])*cal(i))%1000000007)%1000000007;
        }
        return (ans)%1000000007;
    }
};