// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int n1,int n2,int n3,vector<int> &s1,vector<int> &s2,vector<int> &s3){
        int i;
        for(i=n1-2;i>=0;i--)
        {
            s1[i]=s1[i]+s1[i+1];
        }
        for(i=n2-2;i>=0;i--)
        {
            s2[i]=s2[i]+s2[i+1];
        }
        for(i=n3-2;i>=0;i--)
        {
            s3[i]=s3[i]+s3[i+1];
        }
        
        i=n1-1;
        int j=n2-1;
        int k=n3-1;
        int ans=0;
        while(i>=0 && j>=0 && k>=0)
        {
            if(s1[i]==s2[j] && s2[j]==s3[k])
            {
                ans=s1[i];
                i--;
                j--;
                k--;
            }
            else if(s1[i]<s2[j])
            {
                i--;
            }
            else if(s2[j]<s3[k])
            {
                j--;
            }
            else
            {
                k--;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}  // } Driver Code Ends