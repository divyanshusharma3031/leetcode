//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        // Write Your Code here
        vector<int> v(n+1,1);
        v[1]=0;
        for(int i=2;i<=n;i++)
        {
            for(int j=i;j<=n;j=j+i)
            {
                if(j==i)
                {
                    
                }
                else
                {
                    v[j]=0;
                }
            }
        }
        vector<int> ans;
        for(int i=1;i<=n;i++)
        {
            if(v[i]==1)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends