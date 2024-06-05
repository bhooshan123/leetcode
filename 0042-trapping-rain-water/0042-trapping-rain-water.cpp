class Solution {
public:
    int trap(vector<int>& h) {
        int l=0,r=h.size()-1,res=0,ml=0,mr=0;
        while(l<=r){
            if(h[l]<=h[r]){
                if(h[l]>ml)ml=h[l];
                else res+=ml-h[l];
                l++;
            }
            else{
                 if(h[r]>mr)mr=h[r];
                else res+=mr-h[r];
                r--;
        }
        }
        return res;
    }
};