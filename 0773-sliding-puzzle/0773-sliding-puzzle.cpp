class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string ans="123450";
        map<string,int> mpp;
        string s="";
        for(int i=0;i<board.size();i++)
        {
            for(auto it:board[i])
            {
                s+=to_string(it);
            }
        }
        queue<pair<string,int>> q;
        q.push({s,0});
        mpp[s]++;
        vector<vector<int>> dir={{1,3},{0,2,4},{1,5},{0,4},{3,1,5},{4,2}};
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            string curr=it.first;
            int moves=it.second;
            if(curr==ans)
            {
                return moves;
            }
            int idx=-1;
            for(int i=0;i<curr.size();i++)
            {
                if(curr[i]=='0')
                {
                    idx=i;
                    break;
                }
            }
            for(int i=0;i<dir[idx].size();i++)
            {
                string temp=curr;
                swap(temp[idx],temp[dir[idx][i]]);
                if(!mpp[temp])
                {
                    q.push({temp,moves+1});
                    mpp[temp]=1;
                }
            }
        }
        return -1;
    }
};