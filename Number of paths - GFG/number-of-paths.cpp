//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution
{
    public:
    const int mod=1e9+7;
    #define int long long
    int modInverse(int b, int m)
    {
        int x, y; // used in extended GCD algorithm
        int g = gcdExtended(b, m, &x, &y);
     
        // Return -1 if b and m are not co-prime
        if (g != 1)
            return -1;
     
        // m is added to handle negative x
        return (x%m + m) % m;
    }
     
    // Function to compute a/b under modulo m
    int modDivide(int a, int b, int m)
    {
        if(b==1)
        {
            return a;
        }
        a = a % m;
        int inv = modInverse(b, m);
        return (inv * a) % m;
    }
     
    // C function for extended Euclidean Algorithm (used to
    // find modular inverse.
    int gcdExtended(int a, int b, int *x, int *y)
    {
        // Base Case
        if (a == 0)
        {
            *x = 0, *y = 1;
            return b;
        }
     
        int x1, y1; // To store results of recursive call
        int gcd = gcdExtended(b%a, a, &x1, &y1);
     
        // Update x and y using results of recursive
        // call
        *x = y1 - (b/a) * x1;
        *y = x1;
     
        return gcd;
    }
    long long  numberOfPaths(int M, int N)
    {
        // Code Here
        if(M==2)
        {
            return N;
        }
        if(M>N)
        {
            swap(M,N);
        }
        // M<=N always
        int ans=1;
        int x=N-1;
        int y=1;
        int prev=1;
        while(y<M)
        {
            int add=(prev*x)%mod;
            add=modDivide(add,y,mod);
            y++;
            ans=(ans+add)%mod;
            prev=add;
            x++;
        }
        return ans;
    }
};
#undef int

//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N, M;
		cin>>M>>N;
		Solution ob;
	    cout << ob.numberOfPaths(M, N)<<endl;
	}
    return 0;
}
// } Driver Code Ends