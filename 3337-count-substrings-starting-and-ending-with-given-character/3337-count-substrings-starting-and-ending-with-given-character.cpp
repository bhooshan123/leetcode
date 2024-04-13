class Solution {
public:
    long long countSubstrings(string s, char c) {
        int a=0;
        for(char b:s){if(b==c)a++;}
        return (long)a*(a+1)/2;
    }
};