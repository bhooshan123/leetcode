class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int mf=0,x=0;
        int s=tasks.size();
        unordered_map<int,int>mp;
        for(char c:tasks){
            mp[c]++;
            if(mf<mp[c])mf=mp[c];
        }
        for(auto it:mp){
            if(it.second==mf)
            x++;
        }

      
        return max((mf-1)*(n+1)+x,s);
    }
};