class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
        {
            return false;
        }
        queue<char> q;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            q.push(s[i]);
        }
        queue<char> q2;
        for(int i=0;i<n;i++)
        {
            q2.push(goal[i]);
        }
        while(n--)
        {
            char x=q.front();
            q.pop();
            q.push(x);
            if(q==q2)
            {
                return true;
            }
        }
        return false;
    }
};