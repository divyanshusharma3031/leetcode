//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

long long dp[100001][2];
class Solution {
  public:
    long long solve(long long i,long long prev,vector<vector<long long>> &mpp)
    {
        if(i==mpp.size())
        {
            // cout<<mpp[i-1][prev]<<" ";
            return abs(mpp[i-1][prev]);
        }
        if(dp[i][prev]!=-1)
        {
            return dp[i][prev];
        }
        if(mpp[i-1][prev]<mpp[i][0])
        {
            return dp[i][prev]=abs(mpp[i][1]-mpp[i-1][prev])+solve(i+1,1,mpp);
        }
        else if(mpp[i-1][prev]>mpp[i][1])
        {
            return dp[i][prev]=abs(mpp[i][0]-mpp[i-1][prev])+solve(i+1,0,mpp);
        }
        long long a1=abs(mpp[i][0]-mpp[i-1][prev])+abs(mpp[i][1]-mpp[i][0]);
        long long a2=abs(mpp[i][1]-mpp[i-1][prev])+abs(mpp[i][1]-mpp[i][0]);
        return dp[i][prev]=min(a1+solve(i+1,1,mpp),a2+solve(i+1,0,mpp));
    }
    long long minTime(int n, vector<int> &locations, vector<int> &types) {
        // code here
        memset(dp,-1,sizeof(dp));
        map<long long,vector<long long>> mpp;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mpp[types[i]].push_back(locations[i]);
            mx=max(mx,int(mpp[types[i]].size()));
        }
        for(int i=0;i<mx;i++)
        {
            mpp[0].push_back(0);
        }
        for(auto it:mpp)
        {
            vector<long long> v=it.second;
            sort(v.begin(),v.end());
            mpp[it.first]=v;
        }
        vector<vector<long long>> nmpp;
        int i=0;
        for(auto x:mpp)
        {
            auto it=x.second;
            vector<long long> v={it[0],it[it.size()-1]};
            nmpp.push_back(v);
            i++;
        }
        int sz=mpp.size();//no. of types
        return solve(1,0,nmpp);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> locations(n);
        for(int i=0;i<n;i++){
            cin>>locations[i];
        }
        
        
        vector<int> types(n);
        for(int i=0;i<n;i++){
            cin>>types[i];
        }
        
        Solution obj;
        long long res = obj.minTime(n, locations, types);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends