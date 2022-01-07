    bool vowels(char a)
    {
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
        {
            return true;
        }
        return false;
    }
class Solution {
public:

    string reverseVowels(string arr) {
       int i=0;
        int n=arr.length();
        int j=n-1;
        while(i<j)
        {
            if(vowels(arr[i]) && vowels(arr[j]))
            {
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            if(!vowels(arr[i]))
            {
                i++;
            }
            if(!vowels(arr[j]))
            {
                j--;
            }
        }
        return arr;
    }
};