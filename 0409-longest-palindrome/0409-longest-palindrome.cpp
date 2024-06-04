class Solution {
public:
    int longestPalindrome(string s) {
        int c=0;
        unordered_map<char,int>mpp;
        bool odd=false;
        for(char c:s){
            mpp[c]++;
        }
        for(auto it:mpp){
            if(it.second%2==0)c+=it.second;
            else{
                c+=it.second-1;
                odd=true;
            }
            
        }
        if(odd)c+=1;
        return c;
    }
};