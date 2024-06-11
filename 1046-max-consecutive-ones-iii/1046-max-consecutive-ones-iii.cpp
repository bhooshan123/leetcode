class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,maxl=0,l1=0,n=nums.size();
        int num0=0;
        for(int r=0;r<n;r++){
            if(nums[r]==0)num0++;
            while(num0>k){
                if(nums[l]==0)num0--;
                l++;
            }
            l1=r-l+1;
            maxl=max(l1,maxl);

        }
        return maxl;

    }
};