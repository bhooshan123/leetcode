class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
                int l=nums.size();

        vector<int>result(l),p(l,1),s(l,1);
        int i;
        for(i=1;i<l;i++){
            p[i]=p[i-1]*nums[i-1];
        }
        for(i=l-2;i>=0;i--){
             s[i]=s[i+1]*nums[i+1];
             p[i]*=s[i];
        }
      
        
        return p;
    }
};