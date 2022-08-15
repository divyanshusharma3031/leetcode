class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
//         god mode.
       return (s1 + s2 == s2 + s1)  
		    ? s1.substr(0, gcd(size(s1), size(s2)))
			: "";
    }
};