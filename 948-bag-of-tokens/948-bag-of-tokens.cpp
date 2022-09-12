class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        // return solve(0,tokens,power,false);
        int ans=0;
        priority_queue<int,vector<int>,greater<int>> pq1;
        priority_queue<int> pq2;
        int n=tokens.size();
        for(int i=0;i<n;i++)
        {
            pq1.push(tokens[i]);
            pq2.push(tokens[i]);
        }
        int a=0;
        while(!pq1.empty())
        {
            int x=power-pq1.top();
            pq1.pop();
            while(!pq2.empty() && x<0 && a>=1)
            {
                x=x+pq2.top();
                pq2.pop();
                a--;
            }
            if(x<0)
            {
                break;
            }
            a++;
            ans=max(ans,a);
            power=x;
        }
        return ans;
    }
};