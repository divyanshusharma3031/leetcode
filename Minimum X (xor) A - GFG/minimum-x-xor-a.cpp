//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        bitset<32> b1(a);
        bitset<32> b2(b);
        bitset<32> b3(0);
        int c=b2.count();
        for(int i=0;i<32 && c;i++)
        {
            if(b1[31-i]==1)
            {
                b3[31-i]=1;
                c--;
            }
        }
        for(int i=31;i>=0 && c;i--)
        {
            if(b3[31-i]==0)
            {
                b3[31-i]=1;
                c--;
            }
        }
        int x=b3.to_ulong();
        return x;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends