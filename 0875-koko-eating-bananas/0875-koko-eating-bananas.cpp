class Solution {
public:
    bool check(long long mid,vector<long long> &piles,int h)
    {
        int n=piles.size();
        long long count=0;
        for(int i=0;i<n;i+=1)
        {
            count=count+(piles[i]+mid-1)/mid;
        }
        return count<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int start=1;
        int end=1e9;
        int ans=end;
        vector<long long> copy;
        for(auto it:piles)
        {
            copy.push_back(it);
        }
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(check(mid,copy,h))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};