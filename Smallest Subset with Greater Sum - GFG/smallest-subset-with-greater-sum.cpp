// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &arr,int n){
        sort(arr.begin(),arr.end());
        long long s=0;
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
        }
        
        int j=n-1;
        
        long long s1=0;
        int c=0;
        while(j>=0)
        {
            s1=s1+arr[j];
            c++;
            j--;
            if(s1>(s-s1))
            {
                break;
            }
        }
        return c;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}  // } Driver Code Ends