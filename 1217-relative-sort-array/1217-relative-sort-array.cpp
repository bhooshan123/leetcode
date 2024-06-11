class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mpp;
        vector<int>res;
        for(int i:arr1){mpp[i]++;}
        for(int i:arr2){
            while(mpp[i]>0){
                res.push_back(i);
                mpp[i]--;
            }
        }
        vector<int>rem;
        for(int i:arr1){
            if(mpp[i]>0){
                rem.push_back(i);
                mpp[i]--;
            }
        }
        sort(rem.begin(),rem.end());
        res.insert(res.end(),rem.begin(),rem.end());
        return res;
    }
};