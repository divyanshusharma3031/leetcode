// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
                                                 
    queue<int> q;
    long long int i=0;
    for(i=0;i<k;i++)
    {
        if(arr[i]<0)
        {
            q.push(arr[i]);
        }
    }
    vector<long long int> ans;
    if(q.empty())
    {
        ans.push_back(0);
    }
    else
    {
        ans.push_back(q.front());
    }
    
    i=0;
    long long int j=k;
    while(j<n)
    {
        if(arr[i]<0)
        {
            q.pop();
        }
        i++;
        if(arr[j]<0)
        {
            q.push(arr[j]);
        }
        j++;
        if(!q.empty())
        {
            ans.push_back(q.front());
        }
        else
        {
            ans.push_back(0);
        }
    }
    
    return ans;
    
 }