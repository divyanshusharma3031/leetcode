class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        multiset<int> s(people.begin(),people.end());
        int c=0;
        while(s.size())
        {
            auto it=*s.rbegin();
            s.erase(s.find(it));
            if(s.size()==0)
            {
                c++;
                break;
            }
            int lm=limit-it;
            auto x=s.upper_bound(lm);
            if(x==s.begin())
            {
                c++;
                continue;
            }
            x--;
            s.erase(x);
            c++;
        }
        return c;
    }
};