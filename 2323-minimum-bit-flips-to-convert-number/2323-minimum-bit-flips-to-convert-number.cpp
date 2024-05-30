class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res=start^goal;
        int c=0;
        while(res){
            c+=res&1;
           res>>=1;
        }
        return c;
    }
};