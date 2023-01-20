//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> edge)
  {
      // code here
      unordered_map<int,int> mpp;
      for(int i=0;i<N;i++)
      {
          mpp[i]=0;
      }
      for(int i=0;i<edge.size();i++)
      {
          if(edge[i]==-1)
          {
              continue;
          }
          mpp[edge[i]]+=i;
      }
      int mx=-1e9;
      int ans=-1;
      for(auto it:mpp)
      {
          if(it.second>mx)
          {
              mx=it.second;
              ans=it.first;
          }
          else if(it.second==mx)
          {
              ans=max(it.first,ans);
          }
      }
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends