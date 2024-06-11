class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,maxl=0,c=0;
        int count[26]={0};
        for(int r=0;r<s.length();r++){
            count[s[r]-'A']++;
            c=max(c,count[s[r]-'A']);
          while(r-l+1-c>k){
            count[s[l] - 'A']--;
                l++;
          }
          maxl=max(maxl,r-l+1);
        }
        return maxl;
    }
};