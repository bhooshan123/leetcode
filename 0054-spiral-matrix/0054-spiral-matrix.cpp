class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         if (matrix.empty()) return {};
        
        vector<int> res;
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = n - 1, top = 0, bottom = m - 1;
        
        while (left <= right && top <= bottom) {
            // Traverse from left to right.
            for (int column = left; column <= right; column++) {
                res.push_back(matrix[top][column]);
            }
            top++;

            // Traverse downwards.
            for (int row = top; row <= bottom; row++) {
                res.push_back(matrix[row][right]);
            }
            right--;

            if (top <= bottom) {
                // Traverse from right to left.
                for (int column = right; column >= left; column--) {
                    res.push_back(matrix[bottom][column]);
                }
            }
            bottom--;

            if (left <= right) {
                // Traverse upwards.
                for (int row = bottom; row >= top; row--) {
                    res.push_back(matrix[row][left]);
                }
            }
            left++;
        }
        
        return res;
    }
};