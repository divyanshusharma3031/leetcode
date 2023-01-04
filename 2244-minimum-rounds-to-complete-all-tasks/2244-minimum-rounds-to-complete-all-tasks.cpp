class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n=tasks.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[tasks[i]]++;
        }
        int t=0;
        for(auto it:mpp)
        {
          if(it.second==1)
          {
              return -1;
          }
            int x=(it.second)%3;
            if(x==0)
            {
                t+=(it.second)/3;
            }
            else if(x==2)
            {
                t+=(it.second)/3+1;
            }
            else
            {
                t+=(it.second)/3-1+2;
            }
        }
        return t;
    }
};