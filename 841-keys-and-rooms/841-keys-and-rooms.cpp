class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
          vector<int>canvisit(rooms.size(),false);
        canvisit[0]=true;       //we are starting from zeroth room always
        queue<int>q;
        q.push(0);
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            for(int i=0;i<rooms[u].size();i++)
            {
                if(!canvisit[rooms[u][i]])
                {
                    q.push(rooms[u][i]);    //push all the rooms that can be visited by current room
                    canvisit[rooms[u][i]]=true;   
                }
            }   
        }
        for(auto i:canvisit) if(i==false) return false;
        return true;
    }
};