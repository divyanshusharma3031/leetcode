// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here  
        priority_queue<int> p;
        int x=(r*c)/2;
        if((r*c)%2)
        {
            x++;
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                p.push(matrix[i][j]);
                if(p.size()>x)
                {
                    p.pop();
                }
            }
        }
        return p.top();
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends