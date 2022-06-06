class Solution {
public:
    int trapRainWater(vector<vector<int>>& arr) {
        typedef pair<int,int> cell;
        int m=arr.size();
        int n=arr[0].size();
        if(m==0)
        {
            return 0;
        }
        priority_queue<cell,vector<cell>,greater<cell>> pq;
        vector<int> v(n*m+1,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 || i==m-1 || j==0 || j==n-1)
                {
                    if(!v[i*n+j])
                        pq.push({arr[i][j],i*n+j});
                    v[i*n+j]=1;
                }
            }
        }
        int ans=0;
        int dir[4][4]={{0,1},{0,-1},{1,0},{-1,0}};
        while(!pq.empty())
        {
            // cout<<ans<<"\n";
            cell x=pq.top();
            pq.pop();
            int r=x.second/n;
            int c=x.second%n;
            for(int i=0;i<4;i++)
            {
                
                int ii=r+dir[i][0];
                int jj=c+dir[i][1];
                if(ii<0 || ii>=m || jj<0 || jj>=n|| (v[ii*n+jj]==1))
                    continue;
                ans=ans+max(0,x.first-arr[ii][jj]);
                pq.push(cell(max(x.first, arr[ii][jj]), ii*n+jj));
                v[ii*n+jj]=1;
            }
        }
        return ans;
    }
};