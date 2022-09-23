class Solution {
public:
    const int mod=1e9+7;
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
        reverse(str.begin(),str.end());
          return str;
    }
    int binaryToDecimal(string n)
    {
        string num = n;
        long long dec_value = 0;

        // Initializing base value to 1, i.e 2^0
        long long base = 1;

        int len = num.length();
        for (int i = len - 1; i >= 0; i--) {
            if (num[i] == '1')
                dec_value =(dec_value+ base)%mod;
            base = (base * 2)%mod;
        }

        return dec_value;
    }
    int concatenatedBinary(int n) {
        string ans="";
        for(int i=1;i<=n;i++)
        {
            ans+=DecimalToBinary(i);
        }
        return binaryToDecimal(ans);
    }
};