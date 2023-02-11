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
    vector<string> v;
    bool check(int mid,string &s,vector<int> & p)
    {
        int n=p.size();
        for(int i=0;i<mid;i++)
        {
            s[p[i]]='?';
        }
        for(int i=0;i<n-1;i++)
        {
            if( s[i] !='?' && s[i]==s[i+1])
            {
                return false;
            }
        }
        return true;
    }
    int getMinimumDays(int N,string S, vector<int> &P) {
        // code here
        bool b=true;
        for(int i=0;i<N;i++)
        {
            if(S[i]==S[i+1])
            {
                b=false;
            }
        }
        if(b)
        {
            return 0;
        }
        int lo=1;
        int hi=N;
        int ans=N;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            string copy=S;
            if(check(mid,copy,P))
            {
                ans=mid;
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
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
        string S;cin>>S;
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        int res = obj.getMinimumDays(N,S, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends