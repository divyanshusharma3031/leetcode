//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string &s){
        // code here
        int n=s.size();
        stack<int> character;
        stack<int> index;
        index.push(-1);
        int i=0;
        int ans=0;
        while(i<n)
        {
            if(s[i]=='(')
            {
                character.push('(');
                index.push(i);
            }
            else
            {
                if(character.empty())
                {
                    int length=i-index.top();
                    if(length%2==0)
                        ans=max(ans,length);
                    index.push(i);
                }
                else
                {
                    character.pop();
                    index.pop();
                    int length=i-index.top();
                    if(length%2==0)
                        ans=max(ans,length);
                }
            }
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends