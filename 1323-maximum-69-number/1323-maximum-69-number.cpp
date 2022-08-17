class Solution {
public:
    int maximum69Number (int num) {
        vector<int> v;
        int n=num;
        while(n>0)
        {
            v.push_back(n%10);
            n=n/10;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==6)
            {
                v[i]=9;
                break;
            }
        }
        int s=0;
        int i=0;
        while(i<v.size())
        {
            s=s*10+v[i];
            i++;
        }
        return s;
    }
};