class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res=new ArrayList();
        List<Integer> sol=new ArrayList();
        backtrack(nums,res,sol);
        return res;
    }
    public void backtrack(int[]nums,List<List<Integer>>res,List<Integer>sol){
        if(sol.size()==nums.length)res.add(new ArrayList<>(sol));
        for(int i=0;i<nums.length;i++){
            if(sol.contains(nums[i]))continue;
            sol.add(nums[i]);
            backtrack(nums,res,sol);
            sol.remove(sol.size()-1);
        }
    }
}