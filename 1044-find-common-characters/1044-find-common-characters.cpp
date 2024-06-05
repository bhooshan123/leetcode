class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int>m1;
        for(char c='a';c<='z';c++){
            m1[c]=INT_MAX;
        }
        for(string w:words){
            unordered_map<char,int>m;

            for(char c:w){
                m[c]++;
            }
            for(auto it:m1){
                m1[it.first]=min(m[it.first],m1[it.first]);
            }
        }
        vector<string>res;
        for(auto it:m1){
            for(int i=0;i<it.second;i++){
                res.push_back(string(1,it.first));
            }
        }
        return res;
    }
};