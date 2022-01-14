class Solution {
public:
    string orderlyQueue(string s, int k) {
          int n=s.size();
        string temp=s.substr(1,n)+s[0];
        int count=n;
        string result=s;
        if(k==1){
            while(count--){
                if(result>temp)
                result=min(result,temp);
                temp=temp.substr(1,n)+temp[0];
            }
            return result;
            
        }
        else{
            sort(s.begin(),s.end());
        }
        return s;
    }
};