class Solution {
public:
    int pivotInteger(int n) {
            int totalSum = 0;
        for (int i=1;i<=n;i++) {
            totalSum += i;
        }
        
        int leftSum = 0;
        for (int i = 1; i <= n; i++) {
 
            if (leftSum == (totalSum - leftSum - i)) {
                return i;
            }
            leftSum +=i;
        }
        
        return -1;
    }
};