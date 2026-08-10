class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;int count=0;int n=nums.size();
        
        while(i<n){
            int j=i;
            int prod=1;
            while(prod<k && j<n){
            prod*=nums[j];count++;j++;
            if(prod>=k){count--;}}
            i++;
        }
        return count;
    }
};