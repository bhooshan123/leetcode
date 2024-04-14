class Solution {
public:
    string customSortString(string order, string s) {
     int charMap[26] = {0};
        for (char c : s) {
            charMap[c - 'a']++;
        }
        string res = "";
        for (char c : order) {
            res += string(charMap[c - 'a'], c);
            charMap[c - 'a'] = 0; 
        }
     
        for (int i = 0; i < 26; ++i) {
            if (charMap[i] > 0) {
                res += string(charMap[i], 'a' + i);
            }
        }
        
        return res;
    }
};