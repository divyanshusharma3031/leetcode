// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int S, int D){
        // code here 
        string s;
        
        if(D*9<S)
        {
            return "-1";
        }
        
        while(S>9)
        {
            s+="9";
            S-=9;
        }
        if(s.length()==(D-1))
        {
            s+=to_string(S);
            reverse(s.begin(),s.end());
            return s;
        }
        s+=to_string(S-1);
        int x=s.length();
        while(x<D-1)
        {
            s+="0";
            x++;
        }
        s+=to_string(1);
        reverse(s.begin(),s.end());
        return s;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
}   // } Driver Code Ends