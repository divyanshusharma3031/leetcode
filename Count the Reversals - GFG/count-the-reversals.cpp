//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    // your code here
    int n=s.size();
    stack<int> st;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='}')
        {
            if(!st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else
            {
                st.push('{');
                ans++;
            }
        }
        else
        {
            st.push('{');
        }
    }
    if(st.size()%2)
    {
        return -1;
    }
    return ans+st.size()/2;
}