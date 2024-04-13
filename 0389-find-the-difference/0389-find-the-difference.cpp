class Solution {
public:
    char findTheDifference(string s, string t) {
      int diff=0;
      for(char c:s)diff^=c;
      for(char c:t)diff^=c;
      return diff;
    }
};