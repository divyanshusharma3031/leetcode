
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
    int ss=strs.size();
    vector<vector<string>> ans;
    map<vector<int> , vector<string> > mp;
    for(int i=0;i<ss;i++)
    {
        vector<int> temp(26); 
        for(int i=0;i<26;i++)
        {
            temp[i]=0;
        }
        for(int j=0;j<strs[i].length();j++)
        {
            temp[strs[i][j]-'a']++;
        }
        for(int j=0;j<26;j++){cout<<temp[j]<<" ";}
        cout<<endl;
        mp[temp].push_back(strs[i]);
    }    
    while(mp.size())  
    {
        auto it=mp.begin();
        ans.push_back(it->second);
        mp.erase(mp.begin());
    }
    return ans;
}
};