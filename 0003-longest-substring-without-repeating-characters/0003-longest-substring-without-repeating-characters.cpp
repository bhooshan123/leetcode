class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    vector<int> hash(256, -1);   
    int l=0,r=0,maxl=0;
    int len=0;
    int n=s.length();
  
    while(r<n){
        if(hash[s[r]]!=-1){
            if(hash[s[r]]>=l)l=hash[s[r]]+1;
        }
         len=r-l+1;
         maxl=max(len,maxl);
         hash[s[r]]=r;
         r++;

    }
     return maxl;
    }
};