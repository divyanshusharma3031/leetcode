//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string s, string t) {
        // code here
        int j=0;
        int n=s.size();
        for(int i=0;i<n;)
        {
            if(s[i]==t[j])
            {
                j++;
                i++;
            }
            else if(t[j]>='0' && t[j]<='9')
            {
                string s2="";
                int k=0;
                while(j<t.size() && t[j]>='0' && t[j]<='9')
                {
                    s2+=t[j];
                    j++;
                    k++;
                }
                i+=stoi(s2);
                if(i>n)
                {
                    return false;
                }
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends