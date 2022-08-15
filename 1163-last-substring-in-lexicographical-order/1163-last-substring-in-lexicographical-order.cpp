class Solution {
public:
    string lastSubstring(string s) {
     int   i = 0, j = 1, k = 0;
    while (j + k < s.length()) {
        k = 0;
        while (s[i+k] == s[j+k]) {
            k += 1;
            if (j + k == s.length()) break;
            // if the shorter substring is exactly the same to the longer substring up to its end, 
            // the longer substring is the answer.
            // hence, if j+k reaches the end, s.substring(i) will be the answer since we maintain i < j
        }
        if (s[i+k] > s[j+k]) {
            j = j + 1 + k; // because there is no chance s[i+k] <= s[j+k]
        } else if (s[i+k] < s[j+k]) {
            i = i + 1 + k; // because there is no chance s[i+k] >= s[j+k]
        }
        // to ensure that i < j
        if (i >= j) {
            j = i + 1;
        }
    }
    return s.substr(i);

    }
};