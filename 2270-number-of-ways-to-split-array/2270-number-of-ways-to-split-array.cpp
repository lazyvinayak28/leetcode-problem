class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();long long presum=0;long long postsum=0;
        for(int i=0;i<n;i++){
            postsum+=nums[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            presum+=nums[i];
            postsum-=nums[i];
            if(presum>=postsum){count++;}
        }
        return count;
    }
};