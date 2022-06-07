// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    vector<int> prime(long long n)
    {
        vector<int> ans;
        while(n%2==0)
        {
            ans.push_back(2);
            n=n/2;
        }
        
        for(int i=3;i<=sqrt(n);i++)
        {
            while(n%i==0)
            {
                ans.push_back(i);
                n=n/i;
            }
        }
        
        if(n>2)
        {
            ans.push_back(n);
        }
        
        return ans;
    }
    string getSmallest(long long N) {
        // code here
        if(N<=9)
        {
            return to_string(N);
        }
        int temp=0;
        for(int i=9;i>1;i--)
        {
            while(N>0 && (N%i==0))
            {
                temp=temp*10+i;
                N=N/i;
            }
        }
        if(N!=1)
        {
            return "-1";
        }
        
        string ans=to_string(temp);
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.getSmallest(N) << endl;
    }
    return 0;
}  // } Driver Code Ends