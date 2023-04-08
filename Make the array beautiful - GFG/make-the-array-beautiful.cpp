//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    private:
          bool sign(int n)
          {
            return n >= 0;
          }
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        vector<int> s;
        int n=arr.size();
        for(int i=0;i<n;)
        {
            s.push_back(i);
            int j=i+1;
            while(j<n && sign(arr[i])==sign(arr[j]))
            {
                s.push_back(j);
                j++;
            }
            while(j<n && sign(arr[i])!=sign(arr[j]) && s.size())
            {
                s.pop_back();
                j++;
            }
            i=j;
        }
        vector<int> ans;
        for(auto it:s)
        {
            ans.push_back(arr[it]);
        }
        return ans;
    }
};

// 7
// -3 -1 -19 0 6 -13 12


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends