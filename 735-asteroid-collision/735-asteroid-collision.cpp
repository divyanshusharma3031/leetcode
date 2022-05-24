class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        vector<int> ans;
        int n=arr.size();
        stack<int> s;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]<0)
            {
                s.push(arr[i]);
            }
            else
            {
                while(!s.empty() && arr[i]>abs(s.top()))
                {
                    s.pop();
                }
                if(s.empty())
                {
                    ans.push_back(arr[i]);
                }
                else
                {
                    if(abs(s.top())==arr[i])
                    {
                        s.pop();
                    }
                    else
                    {
                        // ans.push_back(s.top());
                    }
                    
                }
            }
        }
        vector<int> v;
        while(!s.empty())
        {
            v.push_back(s.top());
            s.pop();
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            ans.push_back(v[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};