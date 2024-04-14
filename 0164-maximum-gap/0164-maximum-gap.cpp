class Solution {
public:
    int maximumGap(vector<int>& nums) {
       if(nums.size()<2){
           return 0;
       }
       sort(nums.begin(),nums.end());
       int max=0,i;
       for(i=0;i<nums.size()-1;i++){
            if(max<nums[i+1]-nums[i]){
                max=nums[i+1]-nums[i];
            }
       }
       return max;
    }
};