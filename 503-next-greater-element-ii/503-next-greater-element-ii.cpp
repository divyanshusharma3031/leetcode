class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        vector<int> ans;
        stack<int> s;
        int n=2*arr.size()-1;
        int i=n;
        n=arr.size();
        while(i>=0)
        {
            if(!s.empty() && s.top()>arr[i%n])
            {
                ans.push_back(s.top());
                s.push(arr[i%n]);
            }
            else
            {
                while(!s.empty() && s.top()<=arr[i%n])
                {
                    s.pop();
                }
                if(!s.empty())
                {
                    ans.push_back(s.top());
                    s.push(arr[i%n]);
                }
                else
                {
                    ans.push_back(-1);
                    s.push(arr[i%n]);
                }
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        vector<int> f;
        for(int i=0;i<n;i++)
        {
            f.push_back(ans[i]);
        }
        return f;
    }
};