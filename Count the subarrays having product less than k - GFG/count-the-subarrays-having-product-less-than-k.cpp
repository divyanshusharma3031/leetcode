//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
       long long mul=1;
       long long ans=0;
       long long i=0;
       long long j=0;
        while(j<n)
        {
            long long ele=a[j];
            mul=mul*ele;
            while(mul>=k && i<=j)
            {
                mul=mul/a[i];
                i++;
            }
            ans=ans+j-i+1;
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends