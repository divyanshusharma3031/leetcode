// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
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
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}
  // } Driver Code Ends