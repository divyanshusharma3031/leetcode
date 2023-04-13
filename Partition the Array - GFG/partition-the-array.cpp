//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    typedef pair<long long,long long> pll;
    public:
        pll find(vector<long long> &pref,int i,int j)
        {
            long long mn=0;
            long long mx=pref[j]-pref[i-1];
            int lo=i;
            int hi=j;
            while(lo<=hi)
            {
                int mid=(lo+hi)/2;
                long long lsum=pref[mid]-pref[i-1];
                long long rsum=pref[j]-pref[mid];
                if((abs(rsum-lsum))<mx-mn)
                {
                    mn=min(lsum,rsum);
                    mx=max(rsum,lsum);
                }
                if(lsum<rsum)
                {
                    lo=mid+1;
                }
                else
                {
                    hi=mid-1;
                }
            }
            return {mn,mx};
        }
        long long minDifference(int N, vector<int> &A) {
            // code here
            long long ans=1e16;
            vector<long long> pref(N+1,0);
            for(int i=1;i<=N;i++)
            {
                pref[i]=pref[i-1]+A[i-1];
            }
            for(int i=1;i<N-2;i++)
            {
                pll m1=find(pref,1,i+1);
                pll m2=find(pref,i+2,N);
                ans=min(ans,max(m1.second,m2.second)-min(m2.first,m1.first));
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        long long ans = ob.minDifference(N, A);
        cout<<ans<<endl;
    }
    return 0;
} 
// } Driver Code Ends