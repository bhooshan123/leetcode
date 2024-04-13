class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p=0,n=1;
        int l=nums.size();
        vector<int>res(l,0);
        for(int i=0;i<l;i++){
            if(nums[i]>0){
                res[p]=nums[i];
                p+=2;
            }
            else{
                res[n]=nums[i];
                n+=2;
            }
            
        }
        return res;
    }
    
};