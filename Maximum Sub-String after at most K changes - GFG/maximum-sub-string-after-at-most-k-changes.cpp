//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    int solve(string &s,int k,char x)
	    {
	        int n=s.size();
	        int i=0;
	        int j=0;
	        int c=0;
	        int ans=0;
	        while(j<n)
	        {
	           if(s[j]!=x)
	            {
	                c++;
	            }
	            while(c>k)
	               {
	                   if(s[i]!=x)
	                   {
	                       c--;
	                   }
	                    i++;
	               }
	            ans=max(ans,j-i+1);
	            j++;
	        }
	        return ans;
	    }
		int characterReplacement(string s, int k){
		    // Code here
		    int n=s.size();
		    int ans=k+1;//minimum answer is k+1 always
		    for(int i=0;i<26;i++)
		    {
		        ans=max(ans,solve(s,k,i+'A'));
		      //  cout<<ans<<"\n";
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends