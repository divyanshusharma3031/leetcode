// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    int i=0;
    int j=0;
    vector<int> v(26,0);
    vector<int> res(26,0);
    int ans=1;
    int n=S.length();
    while(i<n)
    {
        v[S[i]-'a']++;
        if(v[S[i]-'a']>1)
        {
            char ele=S[i];
            while(S[j]!=ele)
            {
                v[S[j]-'a']--;
                j++;
            }
            v[S[j]-'a']--;
            j++;
            // v[S[i]-'a']--;
        }
        ans=max(ans,i-j+1);
        i++;
    }
    return ans;
}