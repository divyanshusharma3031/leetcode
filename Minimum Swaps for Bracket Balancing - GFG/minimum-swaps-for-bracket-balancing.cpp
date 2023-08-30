//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
        int n=S.size();
        int c=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(S[i]=='[')
            {
                if(c<0)
                {
                    ans=ans+abs(c);
                }
                c++;
            }
            else
            {
                c--;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends