class Solution {
public:
    int kadane(int i,int j,vector<int> &arr)
    {
        int s=0;
        int mx=arr[0];
        for(int idx=i;idx<j;idx++)
        {
            mx=max(mx,arr[idx]);
        }
        if(mx<=0)
        {
            return mx;
        }
        for(int idx=i;idx<j;idx++)
        {
            s=s+arr[idx];
            if(s<=0)
            {
                s=0;
            }
            mx=max(s,mx);
        }
        return mx;
    }
    int maxSubarraySumCircular(vector<int>& arr) {
        int n=arr.size();
        if(n==1)
        {
            return arr[0];
        }
        int s=0;
        int mx=arr[0];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            mx=max(mx,arr[i]);
        }
        if(mx<=0)
        {
            return mx;
        }
        // we cant have first and last element simulaneously
        int a1=kadane(0,n,arr);
        for(int i=0;i<n;i++)
        {
            arr[i]=-arr[i];
        }
        int a2=sum+kadane(0,n,arr);
        return max({a1,a2});
    }
};