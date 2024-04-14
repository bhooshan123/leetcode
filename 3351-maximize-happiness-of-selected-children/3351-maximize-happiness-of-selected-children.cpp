class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
         // Sort the happiness values in descending order.
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long sum = 0;
        int n = happiness.size();

        // Calculate prefix sums to easily calculate decrements later.
        vector<long long> prefixSum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + happiness[i];
        }

        // Calculate total happiness.
        for (int i = 0; i < k && i < n; ++i) {
            long long totalDecrement = min(i, happiness[i]); // The total possible decrement for this child.
            sum += happiness[i] - totalDecrement; // Add the adjusted happiness to the sum.
        }

        // If k is larger than n, add the remaining selections.
        if (k > n) {
            long long extraSelections = k - n; // Extra selections only contribute to decreasing already selected happiness values.
            // This is where you'd calculate the effect of those extra selections, if necessary.
            // The problem description suggests there's a limit to decrementing happiness, which might complicate this part.
            // However, based on the current interpretation, these extra selections might not contribute to the sum, as they'd only decrease the happiness of already selected children, which has been accounted for.
        }

        return sum;
    }
};