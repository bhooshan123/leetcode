class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int m=-1,m1=0;
        for(int i=arr.size()-1;i>=0;i--){
           m1=max(arr[i],m);
           arr[i]=m;
          m=m1;
         }
  
        return arr;
    }
};