class Solution {
public:
    int strStr(string haystack, string needle) {
        int l=0;
        int h=needle.length();
        if(h==0)return 0;
        while(l+h<=haystack.length()){
            if(needle==haystack.substr(l,h)){
                    return l;
            }
            else{
                l++;
            }
        }
        return -1;
    }
};