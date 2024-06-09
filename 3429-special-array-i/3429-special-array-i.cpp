class Solution {
public:
int parity(int i){
            if(i%2==0)return 0;
            else return 1;
        }
    bool isArraySpecial(vector<int>& nums) {
        
        for(int i=1;i<nums.size();i++){
            if(parity(nums[i])==parity(nums[i-1]))return false;
        }
        return true;
    }
};