//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int k, vector<long long> GeekNum) {
        // code here
        if(k>=N)
        {
            return GeekNum[N-1];
        }
        long long curr=0;
        for(auto it:GeekNum)
        {
            curr+=it;
        }
        k++;
        int i=0;
        GeekNum.push_back(curr);
        long long prev=curr;
        while(k<N)
        {
            curr=curr-GeekNum[i]+prev;
            prev=curr;
            i++;
            k++;
            GeekNum.push_back(curr);
        }
        return curr;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends