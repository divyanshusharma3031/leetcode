class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int i=0;
        for(int i=0;i<s.size();i++)
        {
            vector<int> v;
            for(int j=s.size()-1;j>i;j--)
            {
                if(s[i]<s[j])
                {
                    v.push_back(j);
                }
            }
            if(v.size()==0)
            {
                continue;
            }
            char mx=0;
            for(int j=0;j<v.size();j++)
            {
                mx=max(mx,s[v[j]]);
            }
            int idx=-1;
            for(int j=0;j<s.size();j++)
            {
                if(mx==s[j])
                {
                    idx=j;
                }
            }
            swap(s[i],s[idx]);
            break;
        }
        return stoi(s);
    }
};