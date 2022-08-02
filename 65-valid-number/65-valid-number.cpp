#include <regex> 
static regex r(R"_([+-]?(\d+(\.\d*)?|\.\d+)([eE][+-]?\d+)?)_");
class Solution {
public:
    
    bool isNumber(string s) {
        if(s=="")   return false;
        
        smatch m;
        regex_search(s, m, r);
        for (auto x : m) 
            if(x==s)    return true;
            else        return false;
       
        return false;
    }
};
