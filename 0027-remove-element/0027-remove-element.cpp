class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i:nums){
            if(i!=val){nums[j++]=i;}

            
        }
        return j;
    }
};