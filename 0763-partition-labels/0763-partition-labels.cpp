class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        pair<int,int> p;
        p.first=intervals[0][0];
        p.second=intervals[0][1];
        vector<vector<int>> ans;
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]<=p.second)
            {
                p.second=max(p.second,intervals[i][1]);
            }
            else
            {
                vector<int> x;
                x.push_back(p.first);
                x.push_back(p.second);
                ans.push_back(x);
                p.first=intervals[i][0];
                p.second=intervals[i][1];
            }
        }
        vector<int> x;
        x.push_back(p.first);
        x.push_back(p.second);
        ans.push_back(x);
        return ans;
    }
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        map<int,int> first;
        map<int,int> last;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(first.find(s[i]-'a')==first.end())
            {
                first[s[i]-'a']=i+1;
            }
            last[s[i]-'a']=i+1;
        }
        vector<vector<int>> intervals;
        for(int i=0;i<26;i++)
        {
            if(first[i])
                intervals.push_back({first[i],last[i]});
        }
        vector<vector<int>> inter=merge(intervals);
        for(int i=0;i<inter.size();i++)
        {
            ans.push_back(inter[i][1]-inter[i][0]+1);
        }
        return ans;
    }
};