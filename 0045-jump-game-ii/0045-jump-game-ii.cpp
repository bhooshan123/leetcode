class Solution {
public:
    int jump(vector<int>& nums) {
        int m=0,n=0;
        int c=0;
        if(nums.size()==1)return 0;
        for(int i=0;i<nums.size();i++){
        m=max(m,i+nums[i]);
        if(i==n){c++;n=m;}
        if(n>=nums.size()-1)break;
        }
        return c;
    }
};