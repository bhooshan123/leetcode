class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l=0;
        int c=0;
        int sum=0;
        int res=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]%2==1){
                sum++;
                c=0;
            }
            while(sum==k){
                sum-=nums[l]%2;
                l++;
                c++;
            }
            res+=c;
        }
        return res;
    }
};