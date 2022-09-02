typedef pair<int,int> pi;
typedef pair<int,pi> pip;
struct compare
{
    bool operator()(const pi & lhs, const pi & rhs)
    {
        if(lhs.first==rhs.first)
        {
            return lhs.second>rhs.second;
        }
        return lhs.first > rhs.first;
    }
};
class Solution {
public:
    
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        int n=servers.size();
        int m=tasks.size();
        priority_queue<pi,vector<pi>,compare> pq;
        for(int i=0;i<n;i++)
        {
            pq.push({servers[i],i});
        }
        vector<int> ans;
        int t=0;
        priority_queue<array<long,4>,vector<array<long,4>>,greater<array<long,4>>> q;
        int o=0;
        for(int i=0;i<m;i++)
        {
            t=max(i,t);
            if(pq.empty() && q.top()[0]>t)
            {
                t=q.top()[0];
            }
            while(!q.empty() && q.top()[0]<=t)
            {
                pq.push({q.top()[1],q.top()[2]});
                q.pop();
            }
                ans.push_back(pq.top().second);
                q.push({t+tasks[i],pq.top().first,pq.top().second,o});
                pq.pop();
                // i++;
                // t++;
            
            o++;
        }
        return ans;
    }
};