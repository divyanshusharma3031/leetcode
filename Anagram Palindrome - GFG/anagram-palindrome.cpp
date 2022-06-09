// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int isPossible (string S)
{
    // your code here
    int pairs=0;
    int odd=0;
    map<int,int> mpp;
    
    int n=S.length();
    
    for(int i=0;i<n;i++)
    {
        mpp[S[i]]++;
    }
    
    for(auto it:mpp)
    {
        pairs+=mpp[it.first]/2;
        odd+=mpp[it.first]%2;
    }
    if(odd<=1)
    {
        return 1;
    }
    
    return 0;
    
}