// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        
        vector<int> A;
        vector<int> B;
        while(a>0)
        {
            A.push_back(a%2);
            a=a/2;
        }
        while(b>0)
        {
            B.push_back(b%2);
            b=b/2;
        }
        while(B.size()<32)
        {
            B.push_back(0);
        }
        while(A.size()<32)
        {
            A.push_back(0);
        }
        reverse(A.begin(),A.end());
        
        reverse(B.begin(),B.end());
        
        int ans=0;
        
        for(int i=0;i<32;i++)
        {
            if(A[i]!=B[i])
            {
                ans++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends