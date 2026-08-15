class Solution {
public:
    int bestClosingTime(string nums) {
       int cn=0,cy=0;int max=INT_MAX;int idx=0;
       for(int i=0;i<nums.size();i++){
            if(nums[i]=='Y'){cy++;}
       } 
       for(int i=0;i<=nums.size();i++){
        if(i>=1){
        if(nums[i-1]=='Y'){cy--;}
        else if(nums[i-1]=='N'){cn++;}}
        int ans=cn+cy;
        if(ans<max){
            max=ans;
            idx=i;
        }
       }
       return idx;
    }
};