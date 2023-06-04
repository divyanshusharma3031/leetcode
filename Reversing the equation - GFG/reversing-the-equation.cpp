//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            reverse(s.begin(),s.end());
            for(int i=0;i<s.size();)
            {
                if(s[i]>='0' && s[i]<='9')
                {
                    int j=i+1;
                    while(j<s.size() && s[j]!='+' && s[j]!='-' && s[j]!='*' && s[j]!='/')
                    {
                        j++;
                    }
                    reverse(s.begin()+i,s.begin()+j);
                    i=j;
                }
                else
                {
                    i++;
                }
            }
            return s;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends