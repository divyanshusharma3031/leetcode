//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &arr){
        // Code here
        vector<int> ans(n,0);
        int s=arr[0];
        vector<int> suff(n+1,0);
        for(int i=n-1;i>=0;i--)
        {
            suff[i]=suff[i+1]+arr[i];
        }
        vector<int> pref(n+1,0);
        pref[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            pref[i]=pref[i-1]+arr[i];
        }
        for(int i=1;i<n;i++)
        {
            int median=arr[i/2];
            int prev=(i/2-1);
            int nxt=(i/2+1);
            int nxtsum=suff[nxt]-suff[i+1];
            int prevsum=0;
            if(prev>=0)
            {
                prevsum=pref[prev];
            }
            // cout<<prevsum<<" "<<nxtsum<<"\n";
            ans[i]=abs(median*(prev+1)-prevsum)+abs(median*(i-nxt+1)-nxtsum);
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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution obj;
        vector<int> ans=obj.optimalArray(n,a);
        for(auto ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends