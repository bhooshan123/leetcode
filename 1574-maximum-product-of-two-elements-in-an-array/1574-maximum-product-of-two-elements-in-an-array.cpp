class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i:nums){
            pq.push(i);
            if(pq.size()>2)pq.pop();
        }
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        return (a-1)*(b-1);
    }
};