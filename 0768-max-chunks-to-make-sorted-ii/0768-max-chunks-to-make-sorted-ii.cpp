class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        stack<int> s;
        int mx;
        for(int i=0;i<n;i++)
        {
            mx=arr[i];
            while(!s.empty() && s.top()>arr[i])
            {
                mx=max(s.top(),mx);
                s.pop();
            }
            s.push(mx);
        }
        return s.size();
    }
};