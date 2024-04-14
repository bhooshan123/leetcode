class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int l=0;
      int h=nums.size()-1;
      if(l==h)return nums[0];
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==nums[mid+1]||nums[mid]==nums[mid-1]){
                if(nums[l]!=nums[l+1])return nums[l];
                if(nums[h]!=nums[h-1])return nums[h];
                l=l+2;
                h=h-2;
            }
            else{return nums[mid];}
        }
        return -1;
    }
};