// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item item[], int n)
    {
        // Your code here
        vector<pair<double,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({double(item[i].value)/item[i].weight,item[i].weight});
        }
        sort(v.begin(),v.end());
        // reverse(v.begin(),v.end());
        double profit=0;
        for(int i=n-1;i>=0;i--)
        {
            if((w-v[i].second)>=0)
            {
                w=w-v[i].second;
                profit+=v[i].first*v[i].second;
            }
            else
            {
                profit+=v[i].first*w;
                break;
            }
        }
        return profit;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends