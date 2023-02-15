class Solution {
public:
    void dfs(vector<vector<int>> & heights,vector<vector<int>> &vis,int i,int j)
    {
        if(vis[i][j])
        {
            return;
        }
        int n=heights.size();
        int m=heights[0].size();
        vis[i][j]=true;
        if((i+1)<n && heights[i+1][j]>=heights[i][j])
        {
            dfs(heights,vis,i+1,j);
        }
        if((j+1)<m && heights[i][j+1]>=heights[i][j])
        {
            dfs(heights,vis,i,j+1);
        }
        if((i-1)>=0 && heights[i-1][j]>=heights[i][j])
        {
            dfs(heights,vis,i-1,j);
        }
        if((j-1)>=0 && heights[i][j-1]>=heights[i][j])
        {
            dfs(heights,vis,i,j-1);
        }
    }
    void dfs2(vector<vector<int>> & heights,vector<vector<int>> &vis,int i,int j)
    {
        if(vis[i][j])
        {
            return;
        }
        int n=heights.size();
        int m=heights[0].size();
        vis[i][j]=true;
        if((i+1)<n && heights[i+1][j]>=heights[i][j])
        {
            dfs2(heights,vis,i+1,j);
        }
        if((j+1)<m && heights[i][j+1]>=heights[i][j])
        {
            dfs2(heights,vis,i,j+1);
        }
        if((i-1)>=0 && heights[i-1][j]>=heights[i][j])
        {
            dfs2(heights,vis,i-1,j);
        }
        if((j-1)>=0 && heights[i][j-1]>=heights[i][j])
        {
            dfs2(heights,vis,i,j-1);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>> pacific(n,vector<int>(m,0));
        vector<vector<int>> atlantic(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            dfs(heights,pacific,i,0);
            dfs2(heights,atlantic,i,m-1);
        }
        for(int i=0;i<m;i++)
        {
            dfs(heights,pacific,0,i);
            dfs2(heights,atlantic,n-1,i);
        }
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(pacific[i][j] && atlantic[i][j])
                {
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};