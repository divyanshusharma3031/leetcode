//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        // code here
        int c=0;
        string ans="";
        int n=s.size();
        bool b=true;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(i+ans.size()>n)
            {
                break;
            }
            ans+=s[i];
            string nxt=s.substr(i+1,ans.size());
            // cout<<ans<<" "<<nxt<<"\n";
            if(ans==nxt)
            {
                v.push_back(i);
            }
        }
        if(v.size()==0)
        {
            return s.size();
        }
        int x=v[v.size()-1];
        // cout<<x<<"\n";
        c=x+2+s.size()-2*(x+1);
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends