class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        {
            return false;
        }
        multiset<int> s;
        for(auto it:s1)
        {
            s.insert(it);
        }
        multiset<int> se2;
        int i=0;
        for(;i<s1.size();i++)
        {
            if(s.find(s2[i])!=s.end())
            {
                se2.insert(s2[i]);
            }
        }
        if(s==se2)
        {
            return true;
        }
        int j=0;
        int m=s2.size();
        while(i<m)
        {
            auto it=se2.find(s2[j]);
            if(it!=se2.end())
                se2.erase(it);
            j++;
            if(s.find(s2[i])!=s.end())
            {
                se2.insert(s2[i]);
            }
            if(s==se2)
            {
                return true;
            }
            i++;
        }
        return false;
    }
};