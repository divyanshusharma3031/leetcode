//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        // Code here
        unordered_set<int> s;
        unordered_map<int,int> mpp;
        int ans=0;
        for(int i=0;i<N;i++)
        {
            mpp[arr[i]]++;
        }
        for(int i=0;i<N;i++)
        {
            if(mpp[arr[i]]==1 && mpp[1]==0)
            {
                for(int j=2;j*j<=arr[i];j++)
                {
                    if(arr[i]%j==0 && mpp.find(j)!=mpp.end())
                    {
                        ans++;
                        break;
                    }
                    else if(arr[i]%j==0 && mpp.find(arr[i]/j)!=mpp.end())
                    {
                        ans++;
                        break;
                    }
                }
            }
            else
            {
                if(arr[i]==1)
                {
                    if(mpp[arr[i]]>1)
                    {
                        ans++;
                    }
                }
                else
                    ans++;
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
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends