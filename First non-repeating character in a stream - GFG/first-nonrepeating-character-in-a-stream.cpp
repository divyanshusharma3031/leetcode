//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    // Code here
		    int n=s.size();
		    vector<int> count(26,0);
		    vector<int> firstappearance(26,-1);
		    string ans="";
		    for(int i=0;i<n;i++)
		    {
		        count[s[i]-'a']++;
		        int idx=s[i]-'a';
		        if(firstappearance[s[i]-'a']==-1)
		        {
		            firstappearance[s[i]-'a']=i;
		        }
		        int mn=1e9;
		        char x='#';
		        for(int j=0;j<26;j++)
		        {
		            if(count[j]==1)
		            {
		                if(mn>firstappearance[j])
		                {
		                    mn=firstappearance[j];
		                    x='a'+j;
		                }
		            }
		        }
		        ans.push_back(x);
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends