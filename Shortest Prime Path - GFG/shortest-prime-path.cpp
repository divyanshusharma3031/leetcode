//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
  vector<bool> SieveOfEratosthenes(int n)
    {
        vector<bool> prime(n+1,true);
     
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        return prime;
    }
    int sp(int Num1,int Num2,vector<bool> &p)
    {
        queue<int> q;
        q.push(Num1);
        int c=0;
        if(Num1==Num2)
        {
            return 0;
        }
        map<int,int> vis;
        vis[Num1]++;
        while(!q.empty())
        {
            int y=q.size();
            for(int d=0;d<y;d++)
            {
                int val=q.front();
                q.pop();
                int op=c;
                if(val==Num2)
                {
                    return op;
                }
                string s=to_string(val);
                for(int i=0;i<4;i++)
                {
                    if(i==0)
                    {
                        for(int j=1;j<=9;j++)
                        {
                            char x=s[i];
                            s[i]='0'+j;
                            if(!vis[stoi(s)] && p[stoi(s)])
                            {
                                q.push(stoi(s));
                                vis[stoi(s)]++;
                            }
                            s[i]=x;
                        }
                    }
                    else
                    {
                        for(int j=0;j<=9;j++)
                        {
                            char x=s[i];
                            s[i]='0'+j;
                            if(!vis[stoi(s)] && p[stoi(s)])
                            {
                                q.push(stoi(s));
                                vis[stoi(s)]++;
                            }
                            s[i]=x;
                        }
                    }
                }
            }
            c++;
        }
        return 1e9;
    }
    int shortestPath(int Num1,int Num2)
    {   
        // Complete this function using prime vector
        vector<bool> p=SieveOfEratosthenes(10000);
        int ans1=sp(Num1,Num2,p);
        // int ans2=sp(Num2,Num1,p);
        return ans1;
    }
};


//{ Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    Solution obj;
    while(t--)
    {
        int Num1,Num2;
        cin>>Num1>>Num2;
        int answer=obj.shortestPath(Num1,Num2);
        cout<<answer<<endl;
    }
}
// } Driver Code Ends