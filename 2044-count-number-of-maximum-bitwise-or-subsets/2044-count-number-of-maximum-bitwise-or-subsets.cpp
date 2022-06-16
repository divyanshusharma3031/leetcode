class Solution {
public:
    vector<vector<int>> dp;
    int subsetsum(int res,int n,vector<int> &arr,int target)
    {
        if(n==0)
        {
            return 0;
        }
        if(res>target)
        {
            return 0;
        }
        if(dp[n][res]!=-1)
        {
            return dp[n][res];
        }
        if((res|arr[n-1])==target)
        {
            return dp[n][res]=1+subsetsum(res|arr[n-1],n-1,arr,target)+subsetsum(res,n-1,arr,target);
        }
        return dp[n][res]=subsetsum(res|arr[n-1],n-1,arr,target)+subsetsum(res,n-1,arr,target);
    }
    int countMaxOrSubsets(vector<int>& arr) {
        int mxor=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mxor=mxor|arr[i];//this will be mxor;
        }
        dp.resize(n+1,vector<int>(mxor+1,-1));
        sort(arr.begin(),arr.end());
        int a=subsetsum(0,n,arr,mxor);
        return a;
    }
};