class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        int f=0,t=0;
        for(int i=0;i<b.size();i++){
            if(b[i]==5)f++;
            else if(b[i]==10){
                if(f){t++;f--;}else return false;
            }
            else{
                if(f and t){f--;t--;}
                else if(f>=3)f-=3;
                else return false;
            }
        }
        return true;
    }
};