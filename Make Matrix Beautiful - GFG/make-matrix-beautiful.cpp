//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int>> &matrix, int n)
    {
        // code here
        vector<int> v;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            int s=0;
            for(int j=0;j<n;j++)
            {
                s+=matrix[i][j];
            }
            mx=max(mx,s);
            v.push_back(s);
            s=0;
            for(int j=0;j<n;j++)
            {
                s+=matrix[j][i];
            }
            mx=max(mx,s);
        }
        int ans=0;
        for(auto it:v)
        {
            ans=ans+mx-it;
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
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends