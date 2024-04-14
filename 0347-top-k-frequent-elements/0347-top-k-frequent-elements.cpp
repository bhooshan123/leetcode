class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int l=nums.size(),i;
        unordered_map<int,int>map;
        vector <pair<int,int>>key;
        vector<int>result;
        for(i=0;i<l;i++){
           map[nums[i]]++;
        }
        key.reserve(map.size());
        for(auto it:map){
            key.push_back({it.second,it.first});
        }
        sort(key.begin(),key.end(),[](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first > b.first;});
        for(i=0;i<k;i++){
            result.push_back(key[i].second);
        }
return result;
    }
};