class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> q;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            q.push(make_pair(abs(arr[i]-x),arr[i]));
            if(q.size()>k)
            {
                q.pop();
            }
        }
        vector<int> ans;
        int i=0;
        while(i<k)
        {
            ans.push_back(q.top().second);
            q.pop();
            i++;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};