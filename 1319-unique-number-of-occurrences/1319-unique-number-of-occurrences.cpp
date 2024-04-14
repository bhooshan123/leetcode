class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mpp;
        set<int>count;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        for(auto it:mpp){
              if (!count.insert(it.second).second) {
                return false; 
            }
        }
        return true;
    }
};