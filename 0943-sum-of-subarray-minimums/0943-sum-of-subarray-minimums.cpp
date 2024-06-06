class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
  stack<int>s;
        int n=arr.size();
        vector<int>left(n),right(n);
       
        for(int i=0;i<n;i++){
          left[i]=i;  
          right[i]=n-i-1;  
        }
       
       
        for(int i=0;i<n;i++){
          while(!s.empty() and arr[i]<arr[s.top()]){
            right[s.top()]=i-s.top()-1;
              s.pop();
          }
          s.push(i);
        }
       
        while(!s.empty()){
           s.pop();
        }
       
        for(int i=n-1;i>=0;i--){
           while(!s.empty() and arr[i]<=arr[s.top()]){
               left[s.top()]=s.top()-i-1;
               s.pop();
           }
            s.push(i);
        }
       
        int res=0;
        int mod=1e9+7;
       
        for(int i=0;i<n;i++){
          long long product=((right[i]+1)*(left[i]+1))%mod;
            res+=(arr[i]*product)%mod;
           res = res%mod;
        }
        return res%mod;
    }
};