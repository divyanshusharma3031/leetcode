class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int,int> mpp;
        int n=answers.size();
        for(int i=0;i<n;i++)
        {
            mpp[answers[i]]++;
        }
        int ans=0;
        for(auto it:mpp)
        {
            int y=(it.second)/(it.first+1);
            int x=it.second%(it.first+1);
            ans=ans+y*(it.first+1);
            if(x!=0)
            {
                ans=ans+(it.first+1);
            }
            
        }
        return ans;
    }
};