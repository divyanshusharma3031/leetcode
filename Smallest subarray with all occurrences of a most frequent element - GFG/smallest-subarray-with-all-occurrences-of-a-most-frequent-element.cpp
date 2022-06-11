// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    vector<int> smallestSubsegment(int a[], int n)
    {
    	// Complete the function
    	
    	map<int,int> mpp;
    	
    	for(int i=0;i<n;i++)
    	{
    	    mpp[a[i]]++;
    	}
    	
    	int ele=a[0];
    	int mxf=1;
    	
    	for(int i=0;i<n;i++)
    	{
    	    if(mpp[a[i]]>mxf)
    	    {
    	        ele=a[i];
    	        mxf=mpp[a[i]];
    	    }
    	}
    	
    	map<int,int> pos;
    	for(int i=0;i<n;i++)
    	{
    	    if(pos.find(a[i])==pos.end())
    	    {
    	        pos[a[i]]=i;
    	    }
    	}
    	
    	map<int,int> aux;
    	vector<pair<int,int>> v;
    	for(int i=0;i<n;i++)
    	{
    	    aux[a[i]]++;
    	    if(aux[a[i]]==mxf)
    	    {
    	        v.push_back({i-pos[a[i]]+1,pos[a[i]]});
    	    }
    	}
    	sort(v.begin(),v.end());
    	vector<int> ans;
    	int x=v[0].second;
    	int u=v[0].first+x;
    	int i=x;
    	while(i<u)
    	{
    	    ans.push_back(a[i]);
    	    i++;
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
	    int n,i;
	    cin>>n; int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    vector<int > v;
	    Solution ob;
	    v = ob.smallestSubsegment(a, n);
	    for(int i:v)
	        cout<< i << " ";
	    cout<<"\n";
	}
return 0;
}
  // } Driver Code Ends