class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,value=0;
        double ans=0;
        nums1.insert( nums1.end(), nums2.begin(), nums2.end());        
        bool even = nums1.size() %2 == 0;
        sort(nums1.begin(), nums1.end());
        
        if(even){
            value = (nums1.size())/2;
            ans = nums1[value-1];
            value = ((nums1.size())/2);
            return ans = (ans+nums1[value])/2;            
        }else{
            value = (nums1.size()+1)/2;
            return ans = nums1[value-1];
        }
    }
};