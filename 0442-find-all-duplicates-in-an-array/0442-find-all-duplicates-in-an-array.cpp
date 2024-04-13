class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>r;
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto it:mp){
            if(it.second>1)r.push_back(it.first);
        }
        return r;
    }
};