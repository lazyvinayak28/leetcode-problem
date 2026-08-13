class Solution {
public:
    void gen_perm(vector<int> nums,int idx,vector<vector<int>> &ans){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=idx;i<nums.size();i++){
            bool check=false;
            for(int j=idx;j<i;j++){
                if(nums[j]==nums[i]){
                    check=true;
                    break;
                }
            }
            if(check){continue;}

            swap(nums[i],nums[idx]);
            gen_perm(nums,idx+1,ans);
            swap(nums[i],nums[idx]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        gen_perm(nums,0,ans);
        return ans;
    }
};