class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int ls=0,rs=0,ms=0;
        for(int i=0;i<k;i++){
           ls+=cardPoints[i];
        }
        ms=ls;
        int r=n-1;
        for(int i=k-1;i>=0;i--){
            ls-=cardPoints[i];
            rs+=cardPoints[r];
            ms=max(ms,ls+rs);
            r--;

        }
      return ms;
    }
};