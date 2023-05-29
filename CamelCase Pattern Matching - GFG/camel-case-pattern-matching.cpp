//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<string> Patterns;
        vector<string> sol;
        for(int i=0;i<N;i++)
        {
            string x=Dictionary[i];
            string ans="";
            int j=0;
            while(j<x.size())
            {
                if(x[j]>='A' && x[j]<='Z')
                {
                    ans+=x[j];
                }
                if(ans.size()==Pattern.size())
                {
                    break;
                }
                j++;
            }
            Patterns.push_back(ans);
        }
        for(int i=0;i<Patterns.size();i++)
        {
            auto p=Patterns[i];
            if(p==Pattern)
            {
                sol.push_back(Dictionary[i]);
            }
        }
        if(sol.size())
        {
            return sol;
        }
        return {"-1"};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends