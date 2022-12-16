class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        vector<long long> arr(n,0);
        arr[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            long long y=nums[i];
            arr[i]=arr[i-1]+y;
        }
        long long total=arr[n-1];
        long long mx=INT_MAX;
        int idx=0;
        for(int i=1;i<n;i++)
        {
            long long val=abs(arr[i-1]/(i)-(total-arr[i-1])/(n-i));
            // cout<<val<<" ";
            if(mx>val)
            {
                mx=min(mx,val);
                idx=i-1;
            }
        }
        if(mx>abs(arr[n-1]/n))
        {
            idx=n-1;
        }
        return idx;
    }
};