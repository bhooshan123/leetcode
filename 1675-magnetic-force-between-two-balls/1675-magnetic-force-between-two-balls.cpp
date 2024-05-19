class Solution {
public:
    bool canPlace(vector<int>& position,int dist,int m){
        int count=1;
        long long last=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-last>=dist){
                count++;
                last=position[i];
            }
        }
        if(count>=m)return true;
        else return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        long long l=1;
        int n=position.size();
        long long h=position[n-1]-position[0];
        while(l<=h){
            int mid=(l+h)/2;
            if(canPlace(position,mid,m)==1){
                l=mid+1;
            }
            else h=mid-1;

        }
        return h;
    }
};