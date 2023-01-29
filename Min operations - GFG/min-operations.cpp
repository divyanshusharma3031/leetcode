//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(int a, int b) {
        // code here
        vector<int> v1;
        vector<int> v2;
        if(a>b)
        {
            swap(a,b);
        }
        int a1=a;
        int b1=b;
        while(a1>0)
        {
            v1.push_back(a1%2);
            a1=a1/2;
        }
        while(b1>0)
        {
            v2.push_back(b1%2);
            b1=b1/2;
        }
        while(v1.size()!=v2.size())
        {
            v1.push_back(0);
        }
        int c1=0;
        int c2=0;
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
            {
                if(v1[i]==0 && c1==0)
                {
                    c1++;
                }
                if(v2[i]==0 && c2==0)
                {
                    c2++;
                }
            }
        }
        return c1+c2;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.solve(a, b);
        
        printf("%d\n", res);
        
    }
}

// } Driver Code Ends