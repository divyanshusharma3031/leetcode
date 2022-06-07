// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here
	    
	    int n=s.length();
	    
	    map<char,int> mpp;
	    
	    for(int i=0;i<n;i++)
	    {
	        mpp[s[i]]++;    
	    }
	    
	    map<int,int> fre;
	    
	    for(auto x:mpp)
	    {
	        fre[x.second]++;
	    }
	    
	    if(fre.size()==1)
	    {
	        return true;
	    }
	    
	    if(fre.size()>2)
	    {
	        return false;
	    }
	    
	    vector<int> v;
	    
	    for(auto x:fre)
	    {
	        v.push_back(x.first);
	    }
	    
	    int x=v[0];
	    int y=v[1];
	    
	    if(abs(x-y)==1)
	    {
	        return true;
	    }
	    if(x==1 || y==1)
	    {
	        return true;
	    }
	    return false;
	}
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}


  // } Driver Code Ends