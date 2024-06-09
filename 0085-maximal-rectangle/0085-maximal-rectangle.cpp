class Solution {
public:
int largestRectangleArea(vector<int>& heights) {
        int marea=0;
        stack<int>st;
        int n=heights.size();
        for(int i=0;i<=n;i++){
            while(!st.empty() and (i==n or heights[i]<heights[st.top()])){
                int h=heights[st.top()];
                st.pop();
                int w=0;
                if(st.empty()) w=i;
                else w=i-st.top()-1;
                marea=max(marea,h*w);

            }
            st.push(i);
        }
        return marea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int marea=0;
        vector<int>h(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1'){
                    h[j]++;
                }
                else h[j]=0;
            }
            int a=largestRectangleArea(h);
             marea=max(marea,a);
        }
        return marea;
    }
};