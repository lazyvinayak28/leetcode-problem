class Solution {
public:
    void check(int i,vector<int> &nums,int x,int sum,int &c){
        if (i == nums.size()) {
            if (sum == x) c++;
            return;
        }
        int t=nums[i];
        // nums.erase(nums.begin()+0);
        check(i+1,nums,x,sum-t,c);
        check(i+1,nums,x,sum+t,c);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int c=0;
        int sum=0;int i=0;
        check(i,nums,target,sum,c);
        return c;
    }
};