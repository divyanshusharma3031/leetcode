class Solution {
public:
    struct compare
    {
        bool operator()(pair<int,int> p1,pair<int,int> p2)
        {
            if(p1.first==p2.first)
            {
                return p1.second>p2.second;
            }
            return p1.first<p2.first;
        }
    };
    
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int i=0;
        // sliding window 
        
        vector<int> ans;
        
        int mx=INT_MIN;
        
        int n=arr.size();
        
        map<int,int> mpp;//visited map;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
        
        for(;i<k;i++)
        {
            pq.push({arr[i],i});
            mx=max(mx,arr[i]);
        }
        ans.push_back(mx);
        i=0;
        int j=k;
        while(j<n)
        {
            mpp[i]++;
            if(pq.top().first==arr[i])
            {
                pq.pop();
                while(!pq.empty() && mpp[pq.top().second]!=0)
                {
                    pq.pop();
                }
            }
            i++;
            pq.push({arr[j],j});
            ans.push_back(arr[pq.top().second]);
            j++;
        }
        return ans;
    }
};