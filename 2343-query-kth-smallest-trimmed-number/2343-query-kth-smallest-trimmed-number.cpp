bool compare(pair<string,int> &p1,pair<string,int> &p2)
    {
        string s1=p1.first;
        string s2=p2.first;
        if(s1==s2)
        {
            return p1.second<p2.second;
        }
        return s1<s2; 
    }
class Solution {
public:
    
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int n=nums.size();
        int m=nums[0].size();
        int q=queries.size();
        for(int i=0;i<q;i++)
        {
            int x=queries[i][0];
            int y=queries[i][1];
            vector<pair<string,int>> temp;
            for(int i=0;i<n;i++)
            {
                temp.push_back({nums[i].substr(m-y),i});
            }
            sort(temp.begin(),temp.end());
            ans.push_back(temp[x-1].second);
        }
        return ans;
    }
};