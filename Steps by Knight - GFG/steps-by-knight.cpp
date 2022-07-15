// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    struct cell
    {
        int x;
        int y;
        int d;
        cell(int a,int b,int c)
        {
            x=a;
            y=b;
            d=c;
        }
    };
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    queue<cell> q;
	    q.push(cell(KnightPos[0],KnightPos[1],0));
	    vector<vector<int>> vis(N+1,vector<int>(N+1,0));
	    vis[KnightPos[0]][KnightPos[1]];
	    vector<int> dx={-2,-2,1,-1,1,-1,2,2};
	    vector<int> dy={-1,1,-2,-2,2,2,1,-1};
	    int t1=TargetPos[0];
	    int t2=TargetPos[1];
	    while(!q.empty())
	    {
	        cell c=q.front();
	        q.pop();
	        if(c.x==t1 && c.y==t2)
	        {
	            return c.d;
	        }
	        for(int i=0;i<8;i++)
	        {
	            int x=c.x+dx[i];
	            int y=c.y+dy[i];
	            if(x>=1 && x<=N && y>=1 && y<=N && vis[x][y]==0)
	            {
	                vis[x][y]=true;
	                q.push(cell(x,y,c.d+1));
	            }
	        }
	    }
	    return -1;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends