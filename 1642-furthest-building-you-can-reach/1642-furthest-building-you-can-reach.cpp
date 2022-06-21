class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        int n=heights.size();
        for(int i=0;i<n-1;i++)
        {
            int d=heights[i+1]-heights[i];
            if(d<=0)
            {
                continue;
            }
            bricks=bricks-d;
            pq.push(d);
            if(bricks<0)
            {
                bricks=bricks+pq.top();
                pq.pop();
                ladders--;
            }
            if(ladders<0)
            {
                return i;
            }
        }
        return n-1;
    }
};