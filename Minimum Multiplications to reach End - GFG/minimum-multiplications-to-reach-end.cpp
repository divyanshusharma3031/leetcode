//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    const int mod=1e5;
    typedef  pair<int,int> pii;
    int mpp[100001]={0};
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        int n=arr.size();
        queue<pair<int,int>> q;
        q.push({start,0});
        mpp[start]=1;
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int num=it.first;
            int count=it.second;
            if(num==end)
            {
                return count;
            }
            for(int i=0;i<n;i++)
            {
                int x=(num*arr[i])%mod;
                if(mpp[x]==0)
                {
                    q.push({x,count+1});
                    mpp[x]=1;
                }
            }
        }
        return -1;
    }
};


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
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends