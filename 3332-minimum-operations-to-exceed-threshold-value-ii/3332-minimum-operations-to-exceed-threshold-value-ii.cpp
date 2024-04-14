class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
     priority_queue<long long, vector<long long>, greater<long long>> minHeap(nums.begin(), nums.end());
        int count = 0;

        while (minHeap.size() > 1) {
            if (minHeap.top() >= k) {
                return count; 
            }

            long long x = minHeap.top(); minHeap.pop();
            long long y = minHeap.top(); minHeap.pop();

            long long c = min(x, y) * 2 + max(x, y);
            minHeap.push(c);
            count++; 
        }

        if (minHeap.top() >= k) {
            return count;
        }

        return -1;
    }
};