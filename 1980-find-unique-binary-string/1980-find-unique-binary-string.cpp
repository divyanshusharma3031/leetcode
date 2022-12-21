class Solution {
private:
    unordered_map<string,int> mpp;
    string ans="";
public:
    void find(string s,int n)
    {
        // cout<<s.size()<<" ";
        if(n==s.size())
        {
            if(!mpp[s])
            {
                ans=s;
                return;
            }
            return;
        }
        find(s+"0",n);
        if(ans.size()>0)
        {
            return;
        }
        find(s+"1",n);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        string s="";
        for(auto it:nums)
        {
            mpp[it]++;
        }
        int n=nums.size();
        find(s,n);
        return ans;
    }
};