// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      
      int ans=0;
      
      unordered_map<int,int> mpp;
      
      for(int i=0;i<n;i++)
      {
          mpp[arr[i]]=1;
      }
      
      for(int i=0;i<n;i++)
      {
          int prev=arr[i]-1;
          int c1=0;
          int next=arr[i]+1;
          while(mpp[prev])
          {
              mpp[prev]--;
              prev--;
              c1++;
          }
          while(mpp[next])
          {
              mpp[next]--;
              next++;
              c1++;
          }
          ans=max(ans,c1+1);
      }
      return ans;
      
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends