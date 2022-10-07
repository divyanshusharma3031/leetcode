class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i=0;
        int j=1;
        int ans=0;
        int n=colors.size();
        while(i<n)
        {
            priority_queue<int,vector<int>,greater<int>> pq;
            j=i+1;
            if(j<n && colors[i]==colors[j])
            {
                pq.push(neededTime[i]);
                while(j<n && colors[j]==colors[i])
                {
                    pq.push(neededTime[j]);
                    j++;
                }
            }
            while(pq.size()>1)
            {
                ans=ans+pq.top();
                pq.pop();
            }
            i=j;
        }
        return ans;
    }
};