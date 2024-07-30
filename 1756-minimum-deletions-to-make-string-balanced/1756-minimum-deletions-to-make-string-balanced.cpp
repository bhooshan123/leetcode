class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> st;
        int c = 0;
        for (int i = 0; i < s.size(); i++) {
            if (!st.empty() && st.top() == 'b' && s[i] == 'a') {
                st.pop();
                c++;
            } else {
                st.push(s[i]);
            }
        }
        return c;
    }
};
