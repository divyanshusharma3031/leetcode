//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
        // your code here
        string lower="";
        string upper="";
        for(auto it:s)
        {
            if(it>='a' && it<='z')
            {
                lower+=it;
            }
            else
            {
                upper+=it;
            }
        }
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        int l=0;
        int u=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=lower[l];
                l++;
            }
            else
            {
                s[i]=upper[u];
                u++;
            }
        }
        return s;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends