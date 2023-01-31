//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        vector<int> v;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]==B[0])
            {
                v.push_back(i);
            }
        }
        // cout<<A.size()<<" "<<B.size()<<"\n";
        int ans=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
            int idx=v[i];
            string x="";
            int c=0;
            int oidx=idx;
            int j=0;
            while(x!=B)
            {
                if(A[idx]==B[j])
                {
                    x+=B[j];
                    if(x==B)
                    {
                        break;
                    }
                    idx=(idx+1)%A.size();
                    if(idx==0)
                    {
                        c++;
                        
                    }
                    j++;
                }
                else
                {
                    break;
                }
            }
            if(x==B)
            {
                ans=min(ans,c);
            }
        }
        if(ans!=INT_MAX)
        {
            return ans+1;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends