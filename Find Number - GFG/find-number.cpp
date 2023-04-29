//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
long long power(long long x, long long y)
{
 
    // Initialize answer
    long long res = 1;
 
    // Check till the number becomes zero
    while (y > 0) {
 
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
 
        // y = y/2
        y = y >> 1;
 
        // Change x to x^2
        x = (x * x);
    }
    return res;
}
class Solution{
public:
    long long findNumber(long long N){
        // Code here
        if(N==1)
        {
            return 1;
        }
        long long og = N;
        long long m = 0;
        long long x = 4 * N + 1;
        while (x >= 5)
        {
            x = x / 5;
            m++;
        }
        long long y = 0;
        for (int j = 0; j < m; j++)
        {
            long long b = ((4 * N + 1) - power(5, m)) / (4 * power(5, j));
            y = y + (1 + b % 5) * power(10, j);
        }
        long long ans = 0;
        string s = to_string(y);
        reverse(s.begin(), s.end());
        vector<long long> v = {0, 1, 3, 5, 7, 9};
        for (int i = 0; i < s.size(); i++)
        {
            auto it = s[i];
            ans = ans + (v[it - '0'] * power(10ll, i));
        }
        return ans;
    }
};

// 1,3,5,7,9,11,13,15,17,19,31,33,35,37,39,51




//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.findNumber(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends