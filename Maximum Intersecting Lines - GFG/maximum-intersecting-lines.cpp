//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
class Solution {
  public:
    int maxIntersections(vector<vector<int>> &lines, int n) {
        // Code here
        sort(lines.begin(),lines.end());
        ordered_set s;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            int sz=i+1-(s.order_of_key(lines[i][0]));
            mx=max(mx,sz);
            s.insert(lines[i][1]);
        }
        return mx;
    }
};
//  1 2 1 4
//  3 3 2 4

 

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends