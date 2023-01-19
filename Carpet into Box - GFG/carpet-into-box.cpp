//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        int ans=1e9;
        // A->C
        // B->D
        int oa=A;
        int ob=B;
        int a1=0;
        int a2=0;
        while(A>C)
        {
            A=A/2;
            a1++;
        }
        while(B>D)
        {
            B=B/2;
            a2++;
        }
        A=oa;
        B=ob;
        ans=a1+a2;
        int a3=0;
        int a4=0;
        while(A>D)
        {
            A=A/2;
            a3++;
        }
        while(B>C)
        {
            B=B/2;
            a4++;
        }
        int ans2=a3+a4;
        return min(ans,ans2);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends