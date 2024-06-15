class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()-k];
        priority_queue<int>pq;
        for(int i:nums)pq.push(i);
        int c=1;
        while(c<k){
            pq.pop();
            c++;
        }
        return pq.top();
    }
};