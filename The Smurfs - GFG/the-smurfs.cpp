//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findMin(int n, char a[]){
        // code here
        // R B->G
        // B G->R
        // R G->B
        stack<char> s;
        s.push(a[0]);
        for(int i=1;i<n;i++)
        {
            if(!s.empty() && s.top()!=a[i])
            {
                char x=s.top();
                s.pop();
                if(x=='R')
                {
                    if(a[i]=='B')
                    {
                        x='G';
                    }
                    else
                    {
                        x='B';
                    }
                }
                else if(x=='B')
                {
                    if(a[i]=='R')
                    {
                        x='G';
                    }
                    else
                    {
                        x='R';
                    }
                }
                else
                {
                    if(a[i]=='R')
                    {
                        x='B';
                    }
                    else
                    {
                        x='R';
                    }
                }
                while(!s.empty() && x!=s.top())
                {
                    char y=s.top();
                    s.pop();
                    if(y=='R')
                    {
                        if(x=='B')
                        {
                            y='G';
                        }
                        else
                        {
                            y='B';
                        }
                    }
                    else if(y=='B')
                    {
                        if(x=='R')
                        {
                            y='G';
                        }
                        else
                        {
                            y='R';
                        }
                    }
                    else
                    {
                        if(x=='R')
                        {
                            y='B';
                        }
                        else
                        {
                            y='R';
                        }
                    }
                    x=y;
                }
                s.push(x);
            }
            else
            {
                s.push(a[i]);
            }
        }
        if(s.size()%2)
        {
            return 1;
        }
        return s.size();
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        cout<<ob.findMin(n, a)<<"\n";
    }
    return 0;
}
// } Driver Code Ends