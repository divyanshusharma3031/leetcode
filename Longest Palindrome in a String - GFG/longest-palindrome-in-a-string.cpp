//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        string ans="";
        ans+=S[0];
        int mx=1;
        for(int i=0;i<S.size();i++)
        {
            int middle=i;
            int prev=i-1;
            int next=i+1;
            int sz=1;
            // checking for odd length palindrome
            string s="";
            s+=S[i];
            while(prev>=0 && next<S.size() && S[prev]==S[next])
            {
                sz+=2;
                prev--;
                next++;
            }
            if(mx<sz)
            {
                mx=sz;
                ans=S.substr(prev+1,next-prev-1);
            }
            prev=i;
            next=i+1;
            sz=0;
            // checking for even length palindrome
            s="";
            while(prev>=0 && next<S.size() && S[prev]==S[next])
            {
                sz+=2;
                prev--;
                next++;
            }
            if(mx<sz)
            {
                mx=sz;
                ans=ans=S.substr(prev+1,next-prev-1);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends