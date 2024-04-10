class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        nums1.resize(m + n);

        copy(nums2.begin(), nums2.end(), nums1.begin() + m);

        sort(nums1.begin(), nums1.end());
        int s=nums1.size();
       if(s%2!=0){
            return (double)nums1[s/2];
       }
        return (double)(nums1[s/2]+nums1[s/2-1])/2;
    }
};