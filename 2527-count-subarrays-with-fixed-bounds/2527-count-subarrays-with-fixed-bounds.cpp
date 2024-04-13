class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count = 0;
        int lastMin = -1, lastMax = -1, lastInvalid = -1;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            if (nums[i] < minK || nums[i] > maxK) {
                lastInvalid = i;
            }
            if (nums[i] == minK) {
                lastMin = i;
            }
            if (nums[i] == maxK) {
                lastMax = i;
            }
            
            // The start of a new valid subarray is after the last invalid element
            // and the new subarray must include both minK and maxK.
            int startOfValidSubarray = min(lastMin, lastMax);
            if (startOfValidSubarray > lastInvalid) {
                count += startOfValidSubarray - lastInvalid;
            }
        }
        
        return count;
    }
};
