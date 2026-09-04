class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int pre=nums[0];
        int post=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<post){post=nums[i];}
        }
        for(int i=0;i<n;i++){
            post=nums[i];
            if(nums[i]>pre){pre=nums[i];}
            if(nums[i]==post){
                for(int j=i;j<n;j++){if(nums[j]<post){post=nums[j];}
            }}
            if(pre-post<=k){return i;}
        }
        return -1;
    }
};