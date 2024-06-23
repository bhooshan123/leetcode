class Solution {
public:
     void backtrack(vector<int>& nums,int i,vector<int>&sol,vector<vector<int>>&res,int sum,int target){
     
      int n=nums.size();
      if(sum==target){res.push_back(sol); return ;}
      if(sum>target or i==n)return ;
     
      backtrack(nums,i+1,sol,res,sum,target);
      sol.push_back(nums[i]);
      backtrack(nums,i,sol,res,sum+nums[i],target);
      sol.pop_back();
 
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
         vector<int>sol;
         int sum=0;
         backtrack(candidates, 0, sol, res,sum,target); 
         return res;
    }
};