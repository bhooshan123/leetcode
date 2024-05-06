class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        int f=0;
        for( i=0;i<word.size();i++){
            if(word[i]==ch){
                f=1;
                break;

            }
        }
        if(f==1){
        reverse(word.begin(),word.begin()+i+1);
        }
        return word;
    }
};