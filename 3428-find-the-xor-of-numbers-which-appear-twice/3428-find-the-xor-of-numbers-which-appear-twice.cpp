class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int x=0;
        unordered_map<int,int>mpp;
        for(int i:nums){mpp[i]++;if(mpp[i]==2)x^=i;}
        return x;
    }
};