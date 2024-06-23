class Solution {
public:
     void backtrack(vector<int>& nums,int i,vector<int>&sol,vector<vector<int>>&res){
     
      int n=nums.size();
      if(i==n){res.push_back(sol);
      return ;}
      backtrack(nums,i+1,sol,res);
      sol.push_back(nums[i]);
      backtrack(nums,i+1,sol,res);
      sol.pop_back();
 
}
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>res;
         vector<int>sol;
      backtrack(nums, 0, sol, res); 
        return res;
    } 
};