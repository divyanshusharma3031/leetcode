class Solution {
public:
    int addDigits(int num) {
        string s=to_string(num);
        while(s.size()>1)
        {
            int x=0;
            for(auto it:s)
            {
                x=x+(it-'0');
            }
            s=to_string(x);
        }
        return stoi(s);
    }
};