//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int k) {
        // code here
        deque<int> dq;
        for(int i=1;i<=N;i++)
        {
            dq.push_back(i);
        }
        bool b=true;
        int sz=0;
        while(dq.size()>1)
        {
            if(b)
            {
                dq.pop_front();
                sz++;
                if(sz%k==0)
                {
                    b=!b;
                }
            }
            else
            {
                dq.pop_back();
                sz++;
                if(sz%k==0)
                {
                    b=!b;
                }
            }
        }
        return dq.front();
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends