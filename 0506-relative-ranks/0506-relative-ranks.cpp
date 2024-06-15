class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        vector<string>res(score.size());
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        int rank=1;
        while(!pq.empty()){
            int ind=pq.top().second;
            pq.pop();
            if(rank==1)res[ind]="Gold Medal";
            else if(rank==2)res[ind]="Silver Medal";
            else if(rank==3)res[ind]="Bronze Medal";
            else res[ind]=to_string(rank);
            rank++;
        }
       return res;
    }
};