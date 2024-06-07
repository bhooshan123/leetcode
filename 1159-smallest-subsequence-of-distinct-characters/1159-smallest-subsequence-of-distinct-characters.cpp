class Solution {
public:
    string smallestSubsequence(string s) {
         unordered_map<char,int>mpp;
        stack<char>st;
        unordered_map<char,bool>ins;
        for(char i:s)mpp[i]++;
        for(char i:s){
            mpp[i]--;
            if(ins[i])continue;
            while(!st.empty() and st.top()>i and mpp[st.top()]>0){ins[st.top()]=false;st.pop();}
            st.push(i);
            ins[i]=true;
        }
        string res;
        for(int i=st.size()-1;i>=0;i--){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};