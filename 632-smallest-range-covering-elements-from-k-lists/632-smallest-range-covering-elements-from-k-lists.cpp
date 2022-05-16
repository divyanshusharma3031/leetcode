struct Item
{
    int val;
    int r;
    int c;
};
struct comp {
    bool operator() (const Item& it1, const Item& it2) {
        return it2.val < it1.val;
    }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<int> ans;
        priority_queue<Item,vector<Item>,comp> pq;
        int hi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            pq.push({nums[i][0],i,0});
            hi=max(hi,nums[i][0]);
        }
        int lo=pq.top().val;
        ans.push_back(lo);
        ans.push_back(hi);
        while(pq.size()==nums.size())
        {
            Item i=pq.top();
            pq.pop();
            if((i.c+1)<nums[i.r].size())
            {
                pq.push({nums[i.r][i.c+1],i.r,i.c+1});
                hi=max(hi,nums[i.r][i.c+1]);
                lo=pq.top().val;
                if((hi-lo)<(ans[1]-ans[0]))
                {
                    ans[1]=hi;
                    ans[0]=lo;
                }
            }
        }
        return ans;
        
    }
};