class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<char>> vis(m,vector<char>(n,'0'));
        for(int i=0;i<guards.size();i++)
        {
            vis[guards[i][0]][guards[i][1]]='G';
        }
        for(int i=0;i<walls.size();i++)
        {
            vis[walls[i][0]][walls[i][1]]='W';
        }
        for(int i=0;i<m;i++)
        {
            char c='0';
            for(int j=0;j<n;j++)
            {
                if(vis[i][j]=='0')
                {
                    vis[i][j]=c;
                }
                if(vis[i][j]=='G')
                {
                    c='1';
                }
                if(vis[i][j]=='W')
                {
                    c='0';
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            char c='0';
            for(int j=n-1;j>=0;j--)
            {
                if(vis[i][j]=='0')
                {
                    vis[i][j]=c;
                }
                if(vis[i][j]=='G')
                {
                    c='1';
                }
                if(vis[i][j]=='W')
                {
                    c='0';
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            char c='0';
            for(int j=0;j<m;j++)
            {
                if(vis[j][i]=='0')
                {
                    vis[j][i]=c;
                }
                if(vis[j][i]=='G')
                {
                   c='1';
                }
                if(vis[j][i]=='W')
                {
                    c='0';
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            char c='0';
            for(int j=m-1;j>=0;j--)
            {
                if(vis[j][i]=='0')
                {
                    vis[j][i]=c;
                }
                if(vis[j][i]=='G')
                {
                    c='1';
                }
                if(vis[j][i]=='W')
                {
                    c='0';
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                // cout<<vis[i][j]<<" ";
                if(vis[i][j]=='0')
                {
                    ans++;
                }
            }
            // cout<<"\n";
        }
        return ans;
    }
};