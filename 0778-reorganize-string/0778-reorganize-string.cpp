class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mpp;
        priority_queue<pair<int,char>>pq;
        for(char c:s){
            mpp[c]++;
        }
        for(auto it:mpp){
            pq.push({it.second,it.first});
        }
        string res="";
        while(!pq.empty()){
            pair<int,char>p1=pq.top();
            pq.pop();
            res+=p1.second;
            if(pq.empty()){
                if(p1.first - 1 > 0) pq.push({p1.first-1,p1.second});
                break;
            }
            pair<int,char> p2 = pq.top();
            res+=p2.second;
            pq.pop();
            if(p2.first-1 > 0) pq.push({p2.first-1,p2.second});
            if(p1.first-1 > 0) pq.push({p1.first-1,p1.second});
            

        }
        if(!pq.empty()){
            return "";
        }

      return res;
    }
};