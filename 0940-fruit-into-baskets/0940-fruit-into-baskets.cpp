class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,maxl=0;
        unordered_map<int,int>mpp;
        for(int r=0;r<fruits.size();r++){
            mpp[fruits[r]]++;
            while(mpp.size()>2) {
                mpp[fruits[l]]--;
                if (mpp[fruits[l]] == 0) {
                    mpp.erase(fruits[l]);
                }
                l++;
            }           
                maxl=max(maxl,r-l+1);                          
        }
        return maxl;
    }
};