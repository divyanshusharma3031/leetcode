class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        int n=changed.size();
        if(n%2)
        {
            return ans;
        }
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[changed[i]]++;
        }
        sort(changed.begin(),changed.end());
        for(int i=0;i<n;i++)
        {
            if(mpp.find(changed[i]*2)!=mpp.end() && mpp.find(changed[i])!=mpp.end())
            {
                mpp[changed[i]*2]--;
                mpp[changed[i]]--;
                ans.push_back(changed[i]);
                if(mpp[changed[i]*2]==0)
                {
                    mpp.erase(changed[i]*2);
                }
                if(mpp[changed[i]]==0)
                {
                    mpp.erase(changed[i]);
                }
            }
        }        
        if(mpp.size())
        {
            return {};
        }
        return ans;
    }
};