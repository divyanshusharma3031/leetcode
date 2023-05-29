//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    int solve(int N, vector<int> p){
        // code here
        vector<int> degree(N,0);
        for(int i=0;i<p.size();i++)
        {
            if(p[i]!=-1)
            {
                degree[p[i]]++;
                degree[i]++;
            }
        }
        int merge=0;
        for(int i=0;i<N;i++)
        {
            if(degree[i]>1)
            {
                merge++;
            }
        }
        return max(merge-1,0);
    }
};


//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> p(N);
        for(int i = 0; i < N; i++){
            cin >> p[i];
        }

        Solution obj;
        cout << obj.solve(N, p) << "\n";
    }
}   
// } Driver Code Ends