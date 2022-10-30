class Solution {
public:
    static bool compare(vector<int> &v1,vector<int> &v2)
    {
        if(v1[0]==v2[0])
        {
            return v1[1]<v2[1];
        }
        return v1[0]>v2[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> ans;
        sort(people.begin(),people.end(),compare);
//         will give the people in ascending order of height
        for(auto it:people)
        {
            ans.insert(ans.begin()+it[1],it);
        }
        return ans;
    }
};