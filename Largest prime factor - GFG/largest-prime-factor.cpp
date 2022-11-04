//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int n){
        // code here
        vector<int> v;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
        v.push_back(n);
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--)
        {
            int ele=v[i];
            // cout<<ele<<" ";
            int c=0;
            for(int j=2;j*j<=ele;j+=1)
            {
                if(ele%j==0)
                {
                    c++;
                   break;
                }
            }
            if(c==0)
            {
                return ele;
            }
        }
        return n%2==0?2:3;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends