class Solution {
public:
    int minAddToMakeValid(string s) {
        int o=0;
        int d=0;
        for(char c:s){
            if(c=='(')o++;
            else if(c==')' and o>0)o--;
            else d++;
        }
       
        return d+o;
    }
};