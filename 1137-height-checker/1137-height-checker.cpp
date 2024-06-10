class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>ex;
        ex=heights;
        sort(ex.begin(),ex.end());
        int c=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=ex[i])c++;
        }
        return c;
    }
};