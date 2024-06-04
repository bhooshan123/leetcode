class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>res(prices.size());
        stack<int>st;
        for(int i=prices.size()-1;i>=0;i--){
            
            while(!st.empty()&&(prices[i]<st.top()))st.pop();
            if(st.empty()){
                st.push(prices[i]);
                res[i]=prices[i];
            }
            else{
                res[i]=prices[i]-st.top();
                st.push(prices[i]);
            }

        }
        return res;
    }
};