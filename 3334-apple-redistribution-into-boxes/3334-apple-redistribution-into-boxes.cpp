class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int sum=0,count=0;
        for(int i=0;i<apple.size();i++){
            sum+=apple[i];
        }
        for(int i: capacity){
            if(sum<=0)break;
            sum-=i;
            count++;
            
        }
        return sum>0 ?-1 :count;
    }
};