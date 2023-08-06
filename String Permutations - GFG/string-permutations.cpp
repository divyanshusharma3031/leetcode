//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    vector<string> ans;
    void solve(int i,string S)
    {
        if(i>=S.size())
            ans.push_back(S);
        for(int idx=i;idx<S.size();idx++)
        {
            swap(S[i],S[idx]);
            solve(i+1,S);
            swap(S[i],S[idx]);
        }
        return;
    }
    vector<string> permutation(string S)
    {
        //Your code here
        sort(S.begin(),S.end());
        solve(0,S);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends