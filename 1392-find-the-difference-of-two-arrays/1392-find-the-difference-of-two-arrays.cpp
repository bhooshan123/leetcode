class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int>set1(nums1.begin(),nums1.end());
       unordered_set<int>set2(nums2.begin(),nums2.end());
       vector<int>r1,r2;
       for(int i:set1){
           if(set2.find(i)==set2.end()){r1.push_back(i);}
       }
        for(int i:set2){
           if(set1.find(i)==set1.end()){r2.push_back(i);}
       }
return {r1,r2};

    }
};