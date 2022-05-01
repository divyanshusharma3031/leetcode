// { Driver Code Starts
//Initial template for C++

#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;  // https://www.geeksforgeeks.org/factorial-large-number-using-boost-multiprecision-library/
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
        //code here
        vector<cpp_int> dp(110,0);
        
        dp[0]=1;
        
        dp[1]=1;
        
        dp[2]=2;
        
        if(n<=2)
        {
            return dp[n];
        }
        
        for(int i=3;i<=n;i++)
        {
            cpp_int k=i-1;
           dp[i]=(2*(2*k+1)*dp[i-1])/(k+2);

        }
        
        return dp[n];
    }
};

// { Driver Code Starts.

int main() 
{
    //taking count of testcases
	int t;
	cin>>t;
	while(t--) {
	    
	    //taking nth number
	    int n;
	    cin>>n;
	    Solution obj;
	    //calling function findCatalan function
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}  // } Driver Code Ends