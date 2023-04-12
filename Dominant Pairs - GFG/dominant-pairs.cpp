//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        vector<int> v;
        vector<int> v2;
        for(int i=0;i<n/2;i++)
        {
            v.push_back(arr[i]);
        }
        for(int i=n/2;i<n;i++)
        {
            v2.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            double y=5.0;
            int x=floor(v[i]/y);
            // cout<<x<<"\n";
            auto it=upper_bound(v2.begin(),v2.end(),x);
            if(it==v2.begin())
            {
                continue;
            }
            else
            {
                it--;
                ans=ans+it-v2.begin()+1;
                // cout<<ans<<" ";
            }
        }
        return ans;
    }  
};
// 2 10 1 2
// -2 0 -3 -10 3 -3 -2 -2
// -10 -3 -2 0
// -2 -2 -3 3

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends