//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int N)  
    {
        // code here
        long long x=0;
        for(int i=0;i<N;i++)
        {
            x=x^arr[i];
        }
        // x is odd_occurence^odd_occurence
        int temp=x;
        int pos=0;
        while((temp&1)!=1)
        {
            pos++;
            temp=temp>>1;
        }
        int mask=1<<pos;
        //divide the numbers in two sets
        int y=0;
        int z=0;
        for(int i=0;i<N;i++)
        {
            if(arr[i]&(mask))
            {
                y=y^arr[i];
            }
            else
            {
                z=z^arr[i];
            }
        }
        if(y<z)
        {
            return {z,y};
        }
        return {y,z};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends