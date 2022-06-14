class Solution {
public:
    int binaryGap(int n) {
        vector<int> ans;
        while(n>0)
        {
            ans.push_back(n%2);
            n=n/2;
        }
        reverse(ans.begin(),ans.end());
        unordered_map<int,int> mpp;
        int a=0;
        for(int i=0;i<ans.size();i++)
        {
            // cout<<ans[i]<<" ";
            if(mpp.find(1)!=mpp.end() && ans[i]==1)
            {
                // cout<<mpp[1]<<"\n";
                a=max(a,i-mpp[1]);
                mpp[1]=i;
            }
            else if(mpp.find(1)==mpp.end() && ans[i]==1)
            {
                mpp[1]=i;
                // cout<<mpp[1]<<"\n";
            }
                
        }
        return a;
    }
};