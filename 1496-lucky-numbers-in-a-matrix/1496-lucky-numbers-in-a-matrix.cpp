class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> minr(m, INT_MAX);
        vector<int> maxc(n, INT_MIN);
        vector<int> res;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                minr[i] = min(minr[i], matrix[i][j]);
            }
        }
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < m; ++i) {
                maxc[j] = max(maxc[j], matrix[i][j]);
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == minr[i] && matrix[i][j] == maxc[j]) {
                    res.push_back(matrix[i][j]);
                }
            }
        }

        return res;
    }
};
