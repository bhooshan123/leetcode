class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int x=0;
        unordered_map<int,int>mpp;
        for(int i:nums)mpp[i]++;
        for(auto it:mpp){
            if(it.second==2)x^=it.first;
        }
        return x;
    }
};