class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int t=m+n-1;
        int i=m-1;
        int j=n-1;
        if(m==0){nums1=nums2;}
        else if(n==0){ nums1=nums1;}
        else{
        while(j>=0 && i>=0){
            if(nums1[i]>=nums2[j]){nums1[t]=nums1[i];i--;t--;}
            else{nums1[t]=nums2[j];j--;t--;}
        }
        while(i>=0 && t>=0){
            nums1[t]=nums1[i];t--;i--;}
        
        while(j>=0 && t>=0){
            nums1[t]=nums2[j];j--;t--;}
        }


    }
};