class Solution {
public:
    typedef pair<int,string> psi;
        struct myComp {
          bool operator()(
            pair<int, string>& a,
            pair<int, string>& b)
          {
              if(a.first==b.first)
              {
                  return a.second<b.second;
              }
            return a.first > b.first;
            // can write more code if required. depends upon requirement.
          }
        };
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans(k);
        priority_queue<psi,vector<psi>,myComp> pq;
        map<string,int> mpp;
        for(auto it:words)
        {
           mpp[it]++; 
        }
        for(auto it:mpp)
        {
            pq.push({it.second,it.first});
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
        int i=k-1;
        while(!pq.empty())
        {
            ans[i]=pq.top().second;
            pq.pop();
            i--;
        }
        return ans;
    }
};