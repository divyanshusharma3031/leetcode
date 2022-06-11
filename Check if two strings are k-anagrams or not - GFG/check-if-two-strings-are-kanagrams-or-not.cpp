// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
  string countSort(string arr){
        // code here
        int fre[26]={0};
        int n=arr.length();
        for(int i=0;i<n;i++)
        {
            fre[arr[i]-'a']++;
        }
        for(int i=1;i<26;i++)
        {
            fre[i]=fre[i]+fre[i-1];
        }
        vector<char> str(arr.length());
        for(int i=arr.length()-1;i>=0;i--)
        {
            fre[arr[i]-'a']--;
            // cout<<fre[arr[i]-'a']<<" "<<arr[i]<<"\n";
            if(fre[arr[i]-'a']>=0)
            {str[fre[arr[i]-'a']]=arr[i];}
        }
        string s="";
        int i=0;
        while(i<arr.length())
        {
            s+=str[i];
            i++;
        }
        return s;
    }
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        int n=str1.length();
        int m=str2.length();
        if(n!=m)
        {
            return false;
        }
        str1=countSort(str1);
        str2=countSort(str2);
        map<int,int> mpp;
        int ue=0;
        for(int i=0;i<n;i++)
        {
            mpp[str2[i]]++;
        }
        // cout<<str1<<" "<<str2<<"\n";
        for(int i=0;i<n;i++)
        {
            // cout<<str1[i]<<" "<<mpp[str1[i]]<<"\n";
            if(mpp[str1[i]]==0)
            {
                ue++;
            }
            else
            {
                mpp[str1[i]]--;
            }
        }
        if(ue<=k)
        {
            return 1;
        }
        return 0;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}  // } Driver Code Ends