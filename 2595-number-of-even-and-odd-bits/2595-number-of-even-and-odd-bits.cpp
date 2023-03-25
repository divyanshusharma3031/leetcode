class Solution {
public:
    string DecimalToBinary(int num)
    {
        string str;
          while(num){
          if(num & 1) // 1
            str+='1';
          else // 0
            str+='0';
          num>>=1; // Right Shift by 1 
        }   
          return str;
    }
    vector<int> evenOddBit(int n) {
        string s=DecimalToBinary(n);
        // reverse(s.begin(),s.end());
        int even=0;
        int odd=0;
        // cout<<s<<"\n";
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                even=even+(s[i]-'0');
            }
            else
            {
                odd=odd+(s[i]-'0');
            }
        }
        return {even,odd};
    }
};