class Solution {
public:
    vector<vector<int>>dp;
    int maxsum(vector<int> &arr,int mx,int k,int idx,int len)
    {
        if(idx==arr.size())
        {
            return dp[idx][len]=len*mx;
        }
        len++;
        int nopart=0;
        int part=0;
        mx=max(mx,arr[idx]);
        if(dp[idx][len]!=-1)
        {
            return dp[idx][len];
        }
        if(len<k)
        {
            nopart=maxsum(arr,mx,k,idx+1,len);
        }
        part=len*mx+maxsum(arr,0,k,idx+1,0);
        return dp[idx][len]=max(part,nopart);
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        dp.resize(arr.size()+1,vector<int>(k+1,-1));
        return maxsum(arr,arr[0],k,0,0);
    }
};