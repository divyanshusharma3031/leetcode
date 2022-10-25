//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    struct compare
    {
        bool operator()(pair<int,int> p1,pair<int,int> p2)
        {
            if(p1.first==p2.first)
            {
                return p1.second>p2.second;
            }
            return p1.first<p2.first;
        }
    };
    
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
       priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
        map<int,int> mpp;
        for(int i=0;i<k;i++)
        {
            pq.push({arr[i],i});
        }
        ans.push_back(pq.top().first);
        int i=k;
        int j=0;
        while(i<n)
        {
            pq.push({arr[i],i});
            i++;
            if(pq.top().first==arr[j])
            {
                pq.pop();
                while(!pq.empty() && mpp[pq.top().second]==1)
                {
                    pq.pop();
                }
            }
            mpp[j]++;
            j++;
            ans.push_back(pq.top().first);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends