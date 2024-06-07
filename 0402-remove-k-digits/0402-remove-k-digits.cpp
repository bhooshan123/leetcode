class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int>st;
        string res;
        for(char i:num){
            while(!st.empty() and st.top()>i and k){
                st.pop();
                k--;
            }
            st.push(i);
        }
        while (k){st.pop();k--;}
        for(int i=st.size()-1;i>=0;i--){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        int start = 0;
        while (start < res.size() && res[start] == '0') {
            start++;
        }
        
        res = res.substr(start);
        
        return res.empty() ? "0" : res;    }
};