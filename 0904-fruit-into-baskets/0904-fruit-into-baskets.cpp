class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int i=0;
        int j=0;
        map<int,int> s;
        int mx=0;
        while(j<n)
        {
            s[fruits[j]]++;
            while(s.size()>2)
            {
                s[fruits[i]]--;
                if(s[fruits[i]]==0)
                {
                    s.erase(fruits[i]);
                }
                i++;
            }
            mx=max(mx,j-i+1);
            j++;
        }
        mx=max(mx,j-i);
        return mx;
    }
};