class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i:nums)mpp[i]++;
        vector<pair<int,int>>r(mpp.begin(),mpp.end());
       sort(r.begin(), r.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second == b.second) {
                return a.first > b.first;
            }
            return a.second < b.second;
        });
        vector<int>res;
 for (const auto& p : r) {
            res.insert(res.end(), p.second, p.first);
        }   
            return res;
    }
};