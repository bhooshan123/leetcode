class Solution {
public:
    bool isIsomorphic(string s, string t) { 
   unordered_map<char,char>mp,mp1;
    
   for(int i=0;i<s.length();i++){
    char c=s[i];
    char d=t[i];
   
    if(mp.count(c)==0&&mp1.count(d)==0){
        mp[c]=d;
        mp1[d]=c;
    }
    else{
        if(mp[c]!=d||mp1[d]!=c)
        return false;
    }
   }
   return true;
    }
};