//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      vector<long long int> ans;
      vector<int> col(n+1,0);
      vector<int> row(n+1,0);
      long long y=n;
      long long x=y*y;
      int coli=n;
      int rowi=n;
      for(auto a:arr)
      {
          int r=a[0];
          int c=a[1];
          if(!row[r])
          {
              x=x-rowi;
              row[r]++;
              coli--;
          }
          if(!col[c])
          {
              x=x-coli;
              col[c]++;
              rowi--;
          }
          ans.push_back(x);
      }
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends