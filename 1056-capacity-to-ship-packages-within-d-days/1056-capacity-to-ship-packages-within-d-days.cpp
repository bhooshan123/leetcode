class Solution {
public:
 bool isvalid(int mid,vector<int>&weights,int days){
        int sum=0;
        int ans=1;
        for(auto x: weights){
            sum+=x;
            if(x>mid){
                return false;
            }
            if(sum>mid){
                ans++;
                sum=x;
            }
        }
        if(ans<=days){
            return true;
        }
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
             int l=1;
        int h=0;
          for(auto x: weights){
            h+=x;
        }
   
        for(auto x: weights){
            h+=x;
        }
        int ans=h;
        
        while(h>=l){
            int mid=l+(h-l)/2;
            if(isvalid(mid,weights,days)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};