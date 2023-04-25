//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
//User function Template for C++
int power(long long x, long long int y, int p=1e9+7)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
class Solution{
public:
    const int mod=1e9+7;
    map<long long,long long> mpp;
    unordered_map<int,int> pos={{2,0},{3,1},{5,2},{7,3},{11,4},{13,5},{17,6},{19,7},{23,8},{29,9}};
    vector<vector<long long>> dp;
    int solve(int i,vector<long long> &filtered,int mask)
    {
        int n=filtered.size();
        if(i==n)
        {
            return mask!=0;
        }
        long long ele=filtered[i];
        bool b=true;
        if(dp[i][mask]!=-1)
        {
            return dp[i][mask];
        }
        int copy=mask;
        for(int j=2;j<=30;j++)
        {
            while(ele%j==0)
            {
                ele=ele/j;
                if((mask&(1<<pos[j]))!=0)
                {
                    b=false;
                }
                if(!b)
                {
                    break;
                }
                if(pos.find(j)!=pos.end())
                    copy=copy|(1<<pos[j]);
            }
        }
       
        long long take=0;
        if(b)
        {
            take=(mpp[filtered[i]]*solve(i+1,filtered,copy))%mod;
        }
        long long nottake=(solve(i+1,filtered,mask))%mod;
        return dp[i][mask]=(take+nottake)%mod;
    }
    int goodSubsets(vector<int> &arr, int n){
        // Code here
        set<int> primes={2,3,5,7,11,13,17,19,23,29,6,10,14,22,26,15,21,30};
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                count++;
            }
            else if(primes.find(arr[i])!=primes.end())
            {
                mpp[arr[i]]++;
            }
        }
        vector<long long> filtered;
        for(auto it:mpp)
        {
            filtered.push_back(it.first);
        }
        int mask=0;
        count=power(2,count);
        dp.resize(30,vector<long long>(2048+1,-1));
        return (solve(0,filtered,mask)*(count))%mod;
    }
};
// 
// 

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        cout<<ob.goodSubsets(a, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends