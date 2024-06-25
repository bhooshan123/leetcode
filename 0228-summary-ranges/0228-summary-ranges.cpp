class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int a=0;
        vector<string>res;
        if(nums.size()==0)return res;
        for(int i=0;i<nums.size();i++){
             if(i==nums.size()-1||nums[i]+1!=nums[i+1]){
                if(a==i) res.push_back(to_string(nums[i]));
                else
                  res.push_back(to_string(nums[a])+"->"+to_string(nums[i]));
                  a=i+1;
                 
             }          
             }
             
        
        return res;
    }
};