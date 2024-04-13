class Solution {
public:
    int maxDepth(string s) {
        int max=-1,count=0;
        for(char c:s){
            if(c=='(')count++;
            if(max<count)max=count;
            if(c==')')count--;
        }
        return max;
    }
};