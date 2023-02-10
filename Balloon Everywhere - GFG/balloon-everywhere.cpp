//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        map<char,int> mpp;
        for(auto it:s)
        {
            mpp[it]++;
        }
        int mx=s.size();
        vector<char> v={'b','a','l','l','o','o','n'};
        for(auto it:v)
        {
            if(it=='l' || it=='o')
            {
                mx=min(mx,mpp[it]/2);
                continue;
            }
            mx=min(mx,mpp[it]);
        }
        return mx;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends