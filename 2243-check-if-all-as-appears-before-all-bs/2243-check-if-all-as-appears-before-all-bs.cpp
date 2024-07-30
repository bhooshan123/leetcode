class Solution {
public:
    bool checkString(string s) {
        bool a=false;
        for(char c:s){
            if(c=='b')a=true;
            if(a&&c=='a')return false;
        }
        return true;
    }
};