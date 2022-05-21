class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        //alternate version of nearest greater to right;
        stack<pair<int,int>> s;
        int n=arr.size();
        vector<int> ans(n,0);
        ans[n-1]=0;
        s.push({arr[n-1],n-1});
        for(int i=n-2;i>=0;i--)
        {
            if(s.top().first>arr[i])
            {
                ans[i]=s.top().second-i;
            }
            else
            {
                while(!s.empty() && s.top().first<=arr[i])
                {
                    s.pop();
                }
                if(s.empty())
                {
                    ans[i]=0;
                }
                else
                {
                    ans[i]=s.top().second-i;
                }
            }
            s.push({arr[i],i});
        }
        return ans;
    }
};