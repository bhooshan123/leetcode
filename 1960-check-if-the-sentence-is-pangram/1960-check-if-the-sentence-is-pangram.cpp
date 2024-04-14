class Solution {
public:
    bool checkIfPangram(string sentence) {
      int hash[26]={0};
      int i;
      if(sentence.length()<26){
          return false;
      }
      for(i=0;i<sentence.length();i++){
          int n=sentence[i]-'a';
          hash[n]++;
      }
      for(i=0;i<26;i++){
          if(hash[i]==0){
              return false;
          }
      }
      return true;
    }
};