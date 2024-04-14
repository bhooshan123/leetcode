class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,count0=0,count1=0,count2=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                count0++;
            }
            else if(nums[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
         
        for(i=0; i < count0; i++) {
            nums[i] = 0;
        }
        for(int j = 0; j < count1; j++, i++) {
            nums[i] = 1;
        }
        for(int k = 0; k < count2; k++, i++) {
            nums[i] = 2;
        }
    }
};