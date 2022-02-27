class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> t(n+1,0);
        for(int i=0;i<trust.size();i++)
        {
            t[trust[i][0]]++;
        }
        int pote=-1;
        for(int i=1;i<t.size();i++)
        {
            if(t[i]==0)
            {
                pote=i;
                break;
            }
        }
        cout<<pote<<"\n";
        int c=0;
        for(int i=0;i<trust.size();i++)
        {
            if(trust[i][1]==pote)
            {
                c++;
            }
        }
        if(c==n-1)
        {
            return pote;
        }
        return -1;
    }
};