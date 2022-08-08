class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        map<int,int> freq;
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            freq[arr[i]]++;
        }
        for(auto it:freq)
        {
            mpp[it.second]++;
        }
        for(auto it:mpp)
        {
            int x=it.second;
            if(x>1)
            {
                return false;
            }
        }
        return true;
    }
};