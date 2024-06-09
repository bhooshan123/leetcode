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
};