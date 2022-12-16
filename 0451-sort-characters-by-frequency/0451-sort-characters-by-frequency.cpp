class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mpp;
        vector<pair<int,char>> v;
        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]]++;
        }
        for(auto it:mpp)
        {
            v.push_back({it.second,it.first});
            
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        string ans="";
        for(auto it:v)
        {   
            char x=it.second;
            int i=it.first;
            while(i>0)
            {
                ans+=x;
                i--;
            }
        }
        return ans;
    }
};