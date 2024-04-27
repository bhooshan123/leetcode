class Solution { 
public:
    int findtime(vector<int>& piles,int i){
        int t=0;
        for(int p:piles){
            t+=ceil((double)p/(double)i);
        }
        return t;
    } 
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int h1=*max_element(piles.begin(),piles.end());
        while(l<h1){
          int mid=(l+h1)/2;
          int r=findtime(piles,mid);
          if(r<=h){
            h1=mid;
          }
          else{
            l=mid+1;
          }

        }
        return l;
    }
};