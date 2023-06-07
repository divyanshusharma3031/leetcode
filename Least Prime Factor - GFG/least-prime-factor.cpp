//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  vector<bool> prime;
  void SieveOfEratosthenes(int n)
    {
        for (int p = 2; p * p <= n; p++) {
            // If prime[p] is not changed, then it is a prime
            if (prime[p] == true) {
                // Update all multiples of p greater than or
                // equal to the square of it numbers which are
                // multiple of p and are less than p^2 are
                // already been marked.
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
      
        // Print all prime numbers
    }
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int> ans;
        ans.push_back(0);
        prime.resize(n+1,1);
        vector<int> v;
        for(int i=2;i<=n;i++)
        {
            if(prime[i])
            {
                v.push_back(i);
            }
        }
        SieveOfEratosthenes(n+1);
        for(int i=1;i<=n;i++)
        {
            if(i==1)
            {
                ans.push_back(1);
            }
            else if((i%2)==0)
            {
                ans.push_back(2);
            }
            else
            {
                if(prime[i])
                {
                    ans.push_back(i);
                }
                else
                {
                    for(auto it:v)
                    {
                        if(i%it==0)
                        {
                            ans.push_back(it);
                            break;
                        }
                    }
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends