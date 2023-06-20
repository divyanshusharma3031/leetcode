class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<long long> pref(nums.size(),0);
        int n=nums.size();
        long long s=0;
        for(int i=0;i<n;i++)
        {
            pref[i]=s;
            s+=nums[i];
        }
        vector<long long> suff(nums.size(),0);
        reverse(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            suff[i]=s;
            s+=nums[i];
        }
        reverse(nums.begin(),nums.end());
        reverse(suff.begin(),suff.end());
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++)
        {
            int rem=i;
            int remright=n-i-1;
            if(rem<k || remright<k)
            {
                ans[i]=-1;
            }
            else
            {
                long long s1=pref[i]-pref[i-k];
                long long s2=suff[i]-suff[i+k];
               long long s3=s1+s2+nums[i];
                long long x=2ll*k+1ll;
                long long s4=s3/x;
                ans[i]=s4;
            }
        }
        return ans;
    }
};