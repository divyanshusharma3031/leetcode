typedef pair<int, int> pi;
class Solution
{
public:
    vector<vector<int>> highestPeak(vector<vector<int>> &isWater)
    {
        int n = isWater.size();
        int m = isWater[0].size();
        queue<pair<int, int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < isWater.size(); i++)
        {
            for (int j = 0; j < isWater[i].size(); j++)
            {
                if (isWater[i][j] == 1)
                {
                    isWater[i][j] = 0;
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            }
        }

        while (!q.empty())
        {
            pi p = q.front();
            q.pop();
            int i = p.first;
            int j = p.second;
            if ((i + 1) < n && vis[i + 1][j] == 0)
            {
                isWater[i + 1][j] = isWater[i][j] + 1;
                vis[i + 1][j] = 1;
                q.push({i + 1, j});
            }
            if ((i - 1) >= 0 && vis[i - 1][j] == 0)
            {
                isWater[i - 1][j] = isWater[i][j] + 1;
                vis[i - 1][j] = 1;
                q.push({i - 1, j});
            }
            if ((j - 1) >= 0 && vis[i][j - 1] == 0)
            {
                isWater[i][j - 1] = isWater[i][j] + 1;
                vis[i][j - 1] = 1;
                q.push({i, j - 1});
            }
            if ((j + 1) < m && vis[i][j + 1] == 0)
            {
                isWater[i][j + 1] = isWater[i][j] + 1;
                vis[i][j + 1] = 1;
                q.push({i, j + 1});
            }
        }
        return isWater;
    }
};
