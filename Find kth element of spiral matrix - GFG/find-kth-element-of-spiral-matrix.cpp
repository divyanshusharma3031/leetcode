//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int ele=a[0][0];
 		int row1=0;
 		int col1=0;
 		int col2=m-1;
 		int row2=n-1;
 		while(k)
 		{
 		    for(int i=col1;i<=col2;i++)
 		    {
 		        k--;
 		        if(k==0)
 		        {
 		            return a[row1][i];
 		        }
 		    }
 		    row1++;
 		    for(int i=row1;i<=row2;i++)
 		    {
 		        k--;
 		        if(k==0)
 		        {
 		            return a[i][col2];
 		        }
 		    }
 		    col2--;
 		    for(int i=col2;i>=col1;i--)
 		    {
 		        k--;
 		        if(k==0)
 		        {
 		            return a[row2][i];
 		        }
 		    }
 		    row2--;
 		    for(int i=row2;i>=row1;i--)
 		    {
 		        k--;
 		        if(k==0)
 		        {
 		            return a[i][col1];
 		        }
 		    }
 		    col1++;
 		}
 		return -1;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends