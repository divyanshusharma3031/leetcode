class Solution {
public:
    int vis[100000]={0};
    bool reach(int idx,vector<int> & arr,vector<int> &dp,int parent)
    {
        // cout<<idx<<"\n";
        int n=arr.size();
        if(idx>=arr.size() || idx<0)
        {
            return false;
        }
        if(vis[idx])
        {
            return false;
        }
        vis[idx]=1;
        if(arr[idx]==0)
        {
            dp[idx]=true;
            return true;
        }
        if(dp[idx]!=-1)
        {
            return dp[idx];
        }
        bool b1;
        if((idx+arr[idx])<n && idx+arr[idx]==parent)
        {
            b1=false;
        }
        else
        {
            b1=reach(idx+arr[idx],arr,dp,idx);
        }
        bool b2;
        if((idx-arr[idx])>=0 && (idx-arr[idx])==parent)
        {
            b2=false;
        }
        else
        {
            b2=reach(idx-arr[idx],arr,dp,idx);
        }
        return dp[idx]=b1||b2;
    }
    bool canReach(vector<int>& arr, int start) {
        vector<int> dp(arr.size()+10,-1);
        return reach(start,arr,dp,-1);
    }
};