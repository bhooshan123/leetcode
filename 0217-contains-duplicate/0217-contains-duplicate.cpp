class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        int n=nums.size(),i;
        for(i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second>1){
                return true;
            }
        }
        return false;
    }
};