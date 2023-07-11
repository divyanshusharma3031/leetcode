//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        // Your code here
        vector<int> ans(n,0);
        vector<int> left(n,0);
        stack<pair<int,int>> s;
        for(int i=0;i<n;i++)
        {
            int c=1;
            while(!s.empty() && s.top().first>arr[i])
            {
                c=c+s.top().second;
                s.pop();
            }
            left[i]=c;
            s.push({arr[i],c});
        }
        stack<pair<int,int>> s2;
        s=s2;
        vector<int> right(n,0);
        for(int i=n-1;i>=0;i--)
        {
            int c=1;
            while(!s.empty() && s.top().first>=arr[i])
            {
                c=c+s.top().second;
                s.pop();
            }
            right[i]=c;
            s.push({arr[i],c});
        }
        for(int i=0;i<n;i++)
        {
            int len=left[i]+right[i]-2;
            ans[len]=max(ans[len],arr[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            ans[i]=max(ans[i],ans[i+1]);
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
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        vector <int> res = ob.maxOfMin(a, n);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends