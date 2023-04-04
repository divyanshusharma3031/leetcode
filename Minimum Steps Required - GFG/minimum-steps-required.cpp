//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string s) {
    // Write your code here.
    int n=s.size();
    int c=1;
    for(int i=0;i<n;)
    {
        if(s[i]=='a')
        {
            i++;
        }
        else
        {
            while(i<n && s[i]=='b')
            {
                i++;
            }
            c++;
        }
    }
    int mn=c;
    c=1;
    for(int i=0;i<n;)
    {
        if(s[i]=='b')
        {
            i++;
        }
        else
        {
            while(i<n && s[i]=='a')
            {
                i++;
            }
            c++;
        }
    }
    return min(mn,c);
}

// bbaaabb



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends