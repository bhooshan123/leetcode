class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0)return false;
        priority_queue<int,vector<int>,greater<int>>pq;
        unordered_map<int,int>mpp;
        for(int i:hand){mpp[i]++;pq.push(i);}
        while(!pq.empty()){
            int c=pq.top();
            for(int i=0;i<groupSize;i++){
                int res=c+i;
                if(mpp[res]==0)return false;
                mpp[res]--;
               
            }
            while (!pq.empty() && mpp[pq.top()] == 0) {
                pq.pop();
            }
            
        }
        return true;
    }
};