//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        int i=0;
        int j=0;
        int n=S.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int c=0;
            int c2=0;
            for(int j=i;j<n;j++)
            {
                if(S[j]>='a' && S[j]<='z')
                {
                    // mpp1[S[j]]++;
                    c++;
                }
                else
                {
                    // mpp2[S[j]]++;
                    c2++;
                }
                if(c==c2)
                {
                    ans++;
                }
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
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends