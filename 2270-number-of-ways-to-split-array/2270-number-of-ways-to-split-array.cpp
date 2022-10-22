class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        vector<long long> pref(n,0);
        pref[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            pref[i]=pref[i-1]+nums[i];
        }
        long long s=pref[n-1];
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            long long rem=s-pref[i];
            // cout<<rem<<" "<<check[i+1]<<" "<<"\n";
            // cout<<rem<<" "<<pref[i]<<"\n";
            if(rem<=pref[i])
            {
                // cout<<rem<<"\n";
                c++;
            }
        }
        return c;
    }
};