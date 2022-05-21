// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int arr[], int n)
    {
      //Your code here
      vector<int> l(n,0);
      vector<int> r(n,0);
      l[0]=0;
      stack<int> s;
      s.push(arr[0]);
      for(int i=1;i<n;i++)
      {
          if(s.top()<arr[i])
          {
              l[i]=s.top();
          }
          else
          {
              while(!s.empty() && s.top()>=arr[i])
              {
                  s.pop();
              }
              if(s.empty())
              {
                  l[i]=0;
              }
              else
              {
                  l[i]=s.top();
              }
          }
              s.push(arr[i]);
      }
      stack<int> s2;
      s2.push(arr[n-1]);
      for(int i=n-2;i>=0;i--)
      {
          if(s2.top()<arr[i])
          {
              r[i]=s2.top();
          }
          else
          {
              while(!s2.empty() && s2.top()>=arr[i])
              {
                  s2.pop();
              }
              if(s2.empty())
              {
                  r[i]=0;
              }
              else
              {
                  r[i]=s2.top();
              }
          }
              s2.push(arr[i]);
      }
      int ans=-1;;
      for(int i=0;i<n;i++)
      {
        //   cout<<l[i]<<" "<<r[i]<<"\n";
          ans=max(ans,abs(l[i]-r[i]));
      }
      return ans;
    }
};

// { Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}


  // } Driver Code Ends