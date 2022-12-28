class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int n=piles.size();
        for(int i=0;i<n;i++)
        {
            pq.push(piles[i]);
        }
        while(k--)
        {
            int x=pq.top();
            pq.pop();
            pq.push(x-x/2);
        }
        int ans=0;
        while(!pq.empty())
        {
            ans=ans+pq.top();
            pq.pop();
        }
        return ans;
    }
};