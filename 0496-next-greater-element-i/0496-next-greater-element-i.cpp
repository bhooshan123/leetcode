class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;   
    unordered_map<int,int>mpp;
    for (int i = nums2.size()-1; i>=0; i--)
    {
        while((! st.empty())  &&st.top()<nums2[i])st.pop();
         if(!st.empty()) mpp[nums2[i]]=st.top();
         else mpp[nums2[i]]=-1;
        st.push(nums2[i]);
    }
    
    vector<int>res(nums1.size(),-1);
    for(int i=0;i<nums1.size();i++){
        res[i]=mpp[nums1[i]];
    }
    return res;
    }
};