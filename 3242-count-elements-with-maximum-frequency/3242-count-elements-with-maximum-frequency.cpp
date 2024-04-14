class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        int max=0;
        for(auto it:mpp){
              if(max<it.second){max=it.second;}
        }
        int count=0;
        for(auto it:mpp){
              if(it.second==max)count++;
        }
return count*max;
        
    }
};