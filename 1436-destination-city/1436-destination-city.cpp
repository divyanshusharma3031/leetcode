class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int> mpp;
        set<string> s;
        for(auto it:paths)
        {
            mpp[it[0]]++;
            s.insert(it[0]);
            s.insert(it[1]);
        }
        string ans="";
        for(auto it:s)
        {
            if(mpp[it])
            {
                
            }
            else
            {
                ans=it;
                break;
            }
        }
        return ans;
    }
};