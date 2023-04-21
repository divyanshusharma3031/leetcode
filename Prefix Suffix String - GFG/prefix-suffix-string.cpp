//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
        unordered_map<string,int> mpp;
        for(int i=0;i<s1.size();i++)
        {
            string S1="";
            string S2=s1[i];
            for(int j=0;j<s1[i].size();j++)
            {
                S1=S1+s1[i][j];
                mpp[S1]++;
                mpp[S2.substr(j)]++;
            }
        }
        int c=0;
        //can give TLE
        for(auto it:s2)
        {
            if(mpp[it])
            {
                c++;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str1,str2,newline;
        if(i==0)
        getline(cin,newline);
        getline(cin,str1);
        getline(cin,str2);
        // getline(cin,newline);
        // cout<<str1<<endl<<str2<<endl;
        vector<string> s1,s2;
        stringstream ss1(str1);
        stringstream ss2(str2);
        string str;
        while(ss1>>str){
            s1.push_back(str);
        }
        while(ss2>>str){
            s2.push_back(str);
        }
        Solution ob;
        cout<<ob.prefixSuffixString(s1, s2)<<endl;
    }
}
// } Driver Code Ends