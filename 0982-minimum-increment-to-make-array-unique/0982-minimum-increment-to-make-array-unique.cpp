class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0;
        int n=nums.size();
        if(n==1)return 0;
        for(int i=1;i<n;i++){
              if(nums[i]<=nums[i-1]){
              
                int t=nums[i-1]-nums[i]+1;
                nums[i]+=t;
                c+=t;
              }
              
        }
        
        return c;
    }
};