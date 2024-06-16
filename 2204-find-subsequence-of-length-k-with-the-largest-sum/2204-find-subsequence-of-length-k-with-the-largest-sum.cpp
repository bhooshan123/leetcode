class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        unordered_map<int,int>count;
        vector<int>res(k);
        for(int i:nums){
            pq.push(i);
            if(pq.size()>k)pq.pop();
        }
        while(!pq.empty()){
            count[pq.top()]++;
            pq.pop();
        }
        int c=0;
        for(int i=0;i<nums.size();i++){
            
            if(count[nums[i]]>0){
                res[c]=nums[i];
                c++;
                count[nums[i]]--;
            }
            if(c==k)break;
        }
         return res;
        }
    
};