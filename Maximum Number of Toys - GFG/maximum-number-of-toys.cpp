//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
public:
  vector<int> maximumToys(int n,vector<int> arr,int Q,vector<vector<int>> Queries){
      // code here
      int q=Queries.size();
      vector<pair<int,int>> v;
      for(int i=0;i<n;i++)
      {
          v.push_back({arr[i],i});
      }
      sort(v.begin(),v.end());
      unordered_map<int,int> mpp;
      for(int i=0;i<n;i++)
      {
          mpp[v[i].second]=i;
      }
      vector<long long> pref(n,0);
      pref[0]=v[0].first;
      for(int i=1;i<n;i++)
      {
          pref[i]=pref[i-1]+v[i].first;
      }
      vector<pair<int,int>> og=v;
      vector<int> ans;
      for(int i=0;i<q;i++)
      {
          int cost=Queries[i][0];
          vector<int> x;
          for(int j=2;j<Queries[i].size();j++)
          {
              x.push_back(mpp[Queries[i][j]-1]);
          }
          sort(x.begin(),x.end());
          int idx=upper_bound(pref.begin(),pref.end(),cost)-pref.begin();
          int count=0;
          for(int j=0;j<x.size();j++)
          {
              if(x[j]<idx)
              {
                  count++;
                  cost+=v[x[j]].first;
                  idx=upper_bound(pref.begin(),pref.end(),cost)-pref.begin();
              }
          }
          ans.push_back(idx-count);
      }
      return ans;
  }
};

//{ Driver Code Starts.
int main() {
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    int N;
    cin>>N;
    vector<int>A(N);
    for(auto &i:A){
      cin>>i;
    }
    int Q;
    cin>>Q;
    vector<vector<int>> Queries(Q);
    for(int i=0;i<Q;i++){
      int x,y;
      cin>>x>>y;
      Queries[i].push_back(x);
      Queries[i].push_back(y);
      for(int j=0;j<Queries[i][1];j++){
        cin>>x;
        Queries[i].push_back(x);
      }
    }
    Solution obj;
    auto ans =obj.maximumToys(N,A,Q,Queries);
    for(auto i:ans)
      cout<<i<<" ";
    cout<<endl;
 }
}
// } Driver Code Ends