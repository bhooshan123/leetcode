class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxc=0;
        for(int i:nums){
            if(i==1){count++;}
            if(i==0){
                maxc=max(maxc,count);
                count=0;
            }
        }
        maxc=max(maxc,count);
        return maxc;
    }
};