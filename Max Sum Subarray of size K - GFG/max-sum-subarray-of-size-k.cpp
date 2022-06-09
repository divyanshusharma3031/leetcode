// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long long maximumSumSubarray(int K, vector<int> &arr , int N){
        // code here
        typedef long long ll;
        int i=0;
        ll s=0;
        ll mx=-1;
        int n=arr.size();
        for(;i<K;i++)
        {
            s+=arr[i];
        }
        mx=max(mx,s);
        i=0;
        int j=K;
        while(j<n)
        {
            s-=arr[i];
            i++;
            s+=arr[j];
            j++;
            mx=max(s,mx);
        }
        return mx;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends