//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int solve(int N, int K, vector<int> &arr) {
        // code here
        int n=N;
        vector<int> pref=arr;
        for(int i=1;i<n;i++)
        {
            pref[i]=pref[i-1]+pref[i];
        }
        vector<int> divisor;
        for(int i=1;i*i<=pref[n-1];i++)
        {
            if((pref[n-1])%i==0)
            {
               divisor.push_back(i);
               if(i!=pref[n-1]/i)
               {
                   divisor.push_back(pref[n-1]/i);
               }
            }
        }
        sort(divisor.begin(),divisor.end(),greater<int>());
        int ans=1;
        for(auto it:divisor)
        {
            int c=0;
            // cout<<it<<" ";
            for(int i=0;i<n;i++)
            {
                if(pref[i]%it==0)
                {
                    c++;
                }
            }
            if(c>=K)
            {
                ans=max(ans,it);
            }
        }
        return ans;
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
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        Solution obj;
        int res = obj.solve(N, K, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends