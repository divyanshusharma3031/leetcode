//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        vector<int> a=arr;
        sort(arr.begin(),arr.end());
        vector<long long> pref(n+1,0);
        vector<long long> ans;
        for(int i=1;i<=n;i++)
        {
            long long ele=arr[i-1];
            pref[i]=pref[i-1]+ele;
        }
        for(int i=0;i<n;i++)
        {
            int idx=lower_bound(arr.begin(),arr.end(),a[i])-arr.begin();
            ans.push_back(pref[idx]);
        }
        return ans;
    }
};

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
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends