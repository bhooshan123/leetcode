class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.length()-1,r=0;
        while(i<j){
            char c=s[i];
            if(s[i]!=s[j])break;
             while(i<=j&&s[i]==c){i++;}
             while(i<=j&&s[j]==c){j--;}
            
        }
        return j-i+1;
    }
};