class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int m=gas.size();
        int n=cost.size();
        if(m!=n)return -1;
        int s1=0,s2=0,t=0,a=0;
        for(int i:gas)s1+=i;
        for(int i:cost)s2+=i;
        if(s1<s2)return -1;
        for(int i=0;i<n;i++){
            t+=gas[i]-cost[i];
            
            if(t<0){t=0;a=i+1;}

        }
        return a;
    }
};