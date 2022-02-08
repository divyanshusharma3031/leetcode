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
    int n=S.length();
    int arr[26]={0};
    for(int i=0;i<n;i++)
    {
        arr[S[i]-'a']++;
    }
    int pairs=0;
    int odd=0;
    for(int i=0;i<26;i++)
    {
        pairs+=arr[i]/2;
        odd+=(arr[i])%2;
    }
    if(odd<=1)
    {
        return 1;
    }
    return 0;
}