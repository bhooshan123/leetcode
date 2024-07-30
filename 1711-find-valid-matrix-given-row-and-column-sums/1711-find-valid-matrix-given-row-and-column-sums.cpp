class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
      
        int m=rowSum.size();
        int n=colSum.size();
        vector<vector<int>>mat(m,vector<int>(n,0));
         int i=0,j=0;
         while(i<m and j<n){
            int res=min(rowSum[i],colSum[j]);
            mat[i][j]=res;
            rowSum[i]-=res;
            colSum[j]-=res;
            if(rowSum[i]==0)i++;
            if(colSum[j]==0)j++;
         }
         return mat;
    }
};