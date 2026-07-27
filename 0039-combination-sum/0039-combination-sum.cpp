class Solution {
public:
    void check(int sum,vector<vector<int>> &ans,vector<int> nums,int i,int x,vector<int>v){
        if(sum>x){return;}
        if(sum==x){ans.push_back(v);return;}
        while(i<nums.size()){
        sum=sum+nums[i];
        v.push_back(nums[i]);
        check(sum,ans,nums,i,x,v);
        v.pop_back();
        sum=sum-nums[i];
        // for(int j=i+1;j<nums.size();j++){
        //     sum+=nums[j];
        //     v.push_back(nums[j]);
        //     check(sum,ans,nums,j,x,v);}
        //     i++;
        
        i++;}

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        vector<int> v;
        int i=0;
        check(0,ans,candidates,i,target,v);
        return ans;
    }
};