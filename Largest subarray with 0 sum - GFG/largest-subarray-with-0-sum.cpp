//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        map<int,int> mpp;
        int ans=0;
        int s=0;
        for(int i=0;i<n;i++)
        {
            s=s+A[i];
            int target=s;
            if(s==0)
            {
                ans=max(ans,i+1);
            }
            else if(mpp.find(target)!=mpp.end())
            {
                ans=max(ans,i-mpp[target]);
            }
            if(mpp.find(s)==mpp.end())
            {
                mpp[s]=i;
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
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends