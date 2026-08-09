class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();int len=0;int countzero=0;
        int i=0,j=0;
        while(j<n){
            if(nums[j]==0){countzero++;}
            while(countzero>k){if(nums[i]==1){i++;}else{countzero--;i++;}}
            int temp=j-i+1;
            if(temp>len){len=temp;}
            j++;
        }
        return len;
    }

};