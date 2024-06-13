class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>mpp;
        int n=s.length();
        int l=0,res=0;
        for(int r=0;r<n;r++){
          mpp[s[r]]++;
          while(mpp['a']>0&&mpp['b']>0&&mpp['c']>0){res+=n-r;mpp[s[l]]--;l++;}        
         
        }
        return res;
    }
};