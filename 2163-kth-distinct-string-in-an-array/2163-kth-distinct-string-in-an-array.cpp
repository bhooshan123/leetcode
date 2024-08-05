class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string res="";
        unordered_map<string,int>mpp;
        for(string c:arr)mpp[c]++;
        for(int i=0;i<arr.size();i++){
            if(mpp[arr[i]]==1){
                k--;
                if(k==0)res+=arr[i];
            }
           
        }
        return res;
    }
};