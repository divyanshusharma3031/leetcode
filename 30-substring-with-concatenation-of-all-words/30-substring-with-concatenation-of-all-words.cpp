class Solution {
public:
    int n, m, total;
    map<string, int> mp;
    string s;
    bool check(int l){
        int h = l+total-1;
        int part = n;
        map<string, int> tt;
        for(int i=1; i<=part; i++){
            string temp = s.substr(l+m*(i-1), m);
            if(mp.find(temp) == mp.end()){
                return false;
            }
            tt[temp]++;
        }
        return tt==mp;
    }
    
    vector<int> findSubstring(string s, vector<string>& words) {
        n = words.size();
        m = words[0].size();
        for(auto a : words){
            mp[a]++;
        }
        this->s = s;
        total = n*m;
        int l=0, h=total-1;
        vector<int> res;
        while(h<s.size()){
            if(check(l)){
                res.push_back(l);
            }
            l++;
            h++;
        }
        return res;
    }
};
