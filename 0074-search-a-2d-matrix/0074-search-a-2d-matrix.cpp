class Solution {
public:
    bool findtar(vector<int>& mat,int t){
        int l=0;
        int h=mat.size()-1;
        while(l<=h){
            int m=(l+h)/2;
            if(mat[m]==t)return true;
            else if(mat[m]<t)l=m+1;
            else h=m-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            bool a=findtar(matrix[i],target);
            if(a==true)return true;
        }
        return false;
    }
};