// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);

    vector<int> v1;
    
    vector<int> v2;

    int i=0;

    int j=n-1;

    while(i<j)
    {
        v1.push_back(arr[i]);
        v2.push_back(arr[j]);
        i++;
        j--;
    }
    int x=arr[n/2];
    j=0;
    for(int i=0;i<v1.size();i++)
    {
        arr[j]=v1[i];
        arr[j+1]=v2[i];
        j+=2;
    }
    if(n%2)
    {
        arr[n-1]=x;
    }
    long long ans=0;

    for(int i=0;i<n;i++)
    {
        ans=ans+abs(arr[i]-arr[(i+1)%n]);
    }
    return ans;
}