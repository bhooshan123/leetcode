class Solution {
   int  bsearch(vector<int>&nums,int target,int l,int h){
       if(l>h){return l;}
        int m=l+(h-l)/2;
        if(nums[m]==target){return m;}
        else if(nums[m]<target){
            return bsearch(nums,target,m+1,h);}
        else{
            return bsearch(nums,target,l,m-1);}
        return -1;
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int r=bsearch(nums,target,l,h);
        return r;
    }
};