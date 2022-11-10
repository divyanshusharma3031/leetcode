//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution {
  public:
    int longestSubstring(string str) {
        
        unordered_map<int,int> fi ;
        int mask = 0 ;
        fi[mask]=-1 ;
        int ans = 0 ;
        
        for(int i=0 ; i<str.size() ; i++){
            
            mask ^= (1<<(str[i]-'a')) ;
            
            if(fi.count(mask))
                ans = max(ans,i-fi[mask]) ;
            
            for(int j=0 ; j<26 ; j++){
                int nm = mask ^ (1<<j) ;
                if(fi.count(nm))
                    ans = max(ans,i-fi[nm]) ;
            }
            
            if(!fi.count(mask))
                fi[mask] = i ;

        }
        return ans ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout << ob.longestSubstring(S) << endl;
    }
    return 0;
}
// } Driver Code Ends