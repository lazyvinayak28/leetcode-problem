class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;int sum=0;int minlen=INT_MAX;
        while(j<n){
            sum=sum+nums[j];
            while(sum>=target){
                int len=j-i+1;
                minlen=min(len,minlen);
                sum=sum-nums[i];
                i++;
            }
            j++;
        }
        if(minlen!=INT_MAX){return minlen;}
        else{return 0;}
    }
};














// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int tempsum=0;int idx=0;
//         for(int x=0;x<nums.size();x++){
//             tempsum+=nums[x];
//             if(tempsum>=target){idx=x+1;break;}
//         }
//         int sum=0;
//         for(int i=1;i<=idx;i++){
//             int k=i;
//             int f=0,l=k-1;
//             int sum=0;
//             for(int p=f;p<=l;p++){
//                 sum+=nums[p];
//             }
//                 if(sum>=target){return i;break;}
//             while(l<nums.size()-1){
//                 sum=sum+nums[l+1]-nums[f];
//                 if(sum>=target){return i;break;}
//                 l++;f++;
//             }
//         }
//         return 0;
//     }
// };