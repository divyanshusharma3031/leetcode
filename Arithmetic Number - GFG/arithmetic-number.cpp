//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int inSequence(int a, int b, int c){
        // code here
        // b=a+(n-1)c;
        if(a==b)
        {
            return true;
        }
        if(c==0)
        {
            return a==b;
        }
        int diff=b-a;
        if(diff<0)
        {
            if(c<0)
            {
                return diff%c==0;
            }
            return false;
        }
        else
        {
            if(c>0)
            {
                 return diff%c==0;
            }
        }
       return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}
// } Driver Code Ends