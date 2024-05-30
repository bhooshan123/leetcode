class Solution {
public:
    int divide(int dividend, int divisor) {
         if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
       
        if(dividend==divisor)return 1;
       long long  sum=0;
      int   c=0;
      bool sign=true;
      if(dividend>0&&divisor<0)sign=false;
      if(dividend<0&&divisor>0)sign=false;
      int n=abs(dividend);
      int d=abs(divisor);
        while(sum+d<=n){
            sum+=d;
            c+=1;
        }
        if(sign==true)
        return c;
        else return -c;
    }
};