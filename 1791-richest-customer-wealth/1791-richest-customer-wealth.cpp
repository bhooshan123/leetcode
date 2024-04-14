class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        vector<int> wealths(n); 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < accounts[i].size(); j++){
                wealths[i] += accounts[i][j];
            }
        }
        sort(wealths.begin(), wealths.end());
        return wealths.back(); 

    }
};