// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        deque<int> q;
        for(int i=0;i<k;i++)
        {
            while(!q.empty() && arr[q.back()]<=arr[i])
            {
                q.pop_back();
            }
            q.push_back(i);
        }
        vector<int> ans;
        ans.push_back(arr[q.front()]);
        int i=0;
        int j=k;
        while(j<n)
        {
            while(!q.empty() && q.front()<=i)
            {
                q.pop_front();
            }
            while(!q.empty() && arr[q.back()]<=arr[j])
            {
                q.pop_back();
            }
            q.push_back(j);
            ans.push_back(arr[q.front()]);
            j++;
            i++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends