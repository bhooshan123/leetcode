class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string result="";
        int count=0;
        for(char c:s){if(c=='1')count++;}
        if(count==1){   
            result+=string(s.size()-1,'0');
            result+='1';}
        else{
            result+=string(count-1,'1');
            result+=string(s.size()-count,'0');
            result+='1';
        }
        return result;
    }
};