// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       // Your code here
       vector<int> ans(n,0);
       
       ans[0]=1;
       
       stack<pair<int,int>> s;
       
       s.push({arr[0],1});
       
       for(int i=1;i<n;i++)
       {
           if(s.top().first>arr[i])
           {
               ans[i]=1;
               s.push({arr[i],1});
           }
           else
           {
               int x=1;
               while(!s.empty() && s.top().first<=arr[i])
               {
                   x+=s.top().second;
                   s.pop();
               }
               ans[i]=x;
               s.push({arr[i],x});
           }
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends