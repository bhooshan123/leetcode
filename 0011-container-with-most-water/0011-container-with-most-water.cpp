class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxc=0;
       int  i=0;
        int j=height.size()-1;
        while(i<j){
            int a=min(height[i],height[j]);
            int b=j-i;
            maxc=max(maxc,a*b);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxc;
    }
};