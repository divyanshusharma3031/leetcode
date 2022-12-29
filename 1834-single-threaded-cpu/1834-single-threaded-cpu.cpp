class Solution {
public:
    typedef pair<int,int> pii;
    struct compare
    {
        bool operator()(pair<int,int> &p1,pair<int,int> &p2)
        {
            if(p1.first==p2.first)
            {
                return p1.second>p2.second;
            }
            return p1.first>p2.first;
        }
    };
    vector<int> getOrder(vector<vector<int>>& tasks) {
        priority_queue<pii,vector<pii>,compare> pq;
        vector<int> ans;
        int n=tasks.size();
        for(int i=0;i<n;i++)
        {
            tasks[i].push_back(i);
        }
        sort(tasks.begin(),tasks.end());
        int c=0;
        for(int i=0;i<n;)
        {
            
            if(tasks[i][0]<=c)
            {
                pq.push({tasks[i][1],tasks[i][2]});
                i++;
            }
            else
            {
                if(pq.empty())
                {
                    c=tasks[i][0];
                }
                else
                {
                    while(!pq.empty() && c<tasks[i][0])
                    {
                        pii p=pq.top();
                        ans.push_back(p.second);
                        pq.pop();
                        c=c+p.first;
                        
                    }
                }
            }
        }
        while(!pq.empty())
        {
            pii p=pq.top();
            ans.push_back(p.second);
            pq.pop();
        }
        return ans;
    }
};