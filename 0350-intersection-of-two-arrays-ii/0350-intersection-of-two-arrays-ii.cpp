class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        vector<int>res;
        for(int i:nums1)mpp[i]++;
        for(int i:nums2){
            if(mpp[i]>0){mpp[i]--;res.push_back(i);}
        }
        return res;
    }
};