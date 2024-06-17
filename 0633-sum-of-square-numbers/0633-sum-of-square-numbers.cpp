class Solution {
public:
    bool judgeSquareSum(int c) {
        long l=0;
        long h=sqrt(c);
        while(l<=h){
            long sq=l*l+h*h;
            if(sq==c)return true;
           else if(sq<c)l++;
            else h--;

        }
        return false;
    }
};