class Solution {
public:
    bool check(int n,vector<int> &arr,long long mid)
    {
        long long a=0;
        for(int i=0;i<arr.size();i++)
        {
            long long x=arr[i];
            a=a+min(x,mid);
        }
        return (a)>=n*mid;
    }
    long long maxRunTime(int n, vector<int>& arr) {
        long long s=0;
        long long start=1;
        long long end=1e14;
        long long ans=0;
        while(start<=end)
        {
            long long mid=(start+end+1)/2;
            if(check(n,arr,mid))
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }
};