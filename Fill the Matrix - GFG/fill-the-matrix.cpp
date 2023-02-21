//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minIteration(int N, int M, int x, int y){    
        // code here
        int vis[N+1][M+1];
        memset(vis,0,sizeof(vis));
        unordered_set<int> s;
        queue<array<int,3>> q;
        q.push({x-1,y-1,0});
        s.insert((x-1)*M+y-1);
        int cnt=1;
        vis[x-1][y-1]=1;
        if(s.size()==N*M)
        {
            return 0;
        }
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int i=it[0];
            int j=it[1];
            int c=it[2];
            if((i-1)>=0 && vis[i-1][j]==0)
            {
                cnt++;
                vis[i-1][j]=1;
                q.push({i-1,j,c+1});
            }
            if(cnt==N*M)
            {
                return it[2]+1;
            }
            if((i+1)<N && vis[i+1][j]==0)
            {
                cnt++;
                vis[i+1][j]=1;
                q.push({i+1,j,c+1});
            }
            if(cnt==N*M)
            {
                return it[2]+1;
            }
            if((j-1)>=0 && vis[i][j-1]==0)
            {
                cnt++;
                vis[i][j-1]=1;
                q.push({i,j-1,c+1});
            }
            if(cnt==N*M)
            {
                return it[2]+1;
            }
            if((j+1)<M && vis[i][j+1]==0)
            {
                cnt++;
                vis[i][j+1]=1;
                q.push({i,j+1,c+1});
            }
            if(cnt==N*M)
            {
                return it[2]+1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends