//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	// Your code here
	queue<string> q;
	q.push("1");
	vector<string> ans;
	while(N--)
	{
	    string s=q.front();
	    q.pop();
	    ans.push_back(s);
	    s+="0";
	    q.push(s);
	    s.pop_back();
	    s.push_back('1');
	    q.push(s);
	}
	return ans;
}


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends