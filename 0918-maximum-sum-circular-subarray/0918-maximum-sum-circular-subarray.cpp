class Solution {
public:
    typedef long long ll;
    int maxSubArray(vector<int> &arr,int lo,int hi)
    {
        if(lo>hi)
        {
            return 0;
        }
        ll ans = INT_MIN;
        ll temp = 0;
        for (int i=lo;i<=hi;i++)
        {
            temp = temp + arr[i];
            if (ans < temp)
            {
                ans = temp;
            }
            if (temp < 0)
            {
                temp = 0;
            }
        }
        return ans;
    }
    int maxSubarraySumCircular(vector<int>& arr) {
        vector<int> newarr=arr;
        int n=arr.size();
        int ans=INT_MIN;
        vector<int> suff(n+1,0);
        ans=maxSubArray(arr,0,n-1);
        suff[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=suff[i+1]+arr[i];
        }
        int s=0;
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            s=s+arr[i];
            mx=max(s,mx);
            ans=max(ans,suff[i+1]+mx);
        }
        return ans;
    }
};