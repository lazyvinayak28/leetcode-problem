class Solution {
public:
    void findcombo(int k,vector<int> nums,int x,vector<vector<int>> &ans, vector<int> t,int sum){
        if(sum==x){ans.push_back(t);return;}
        if(sum>x){return ; }
        for(int i=k;i<nums.size();i++){
            int n=nums[i];
            t.push_back(n);
            sum+=n;
            findcombo(i+1,nums,x,ans,t,sum);
            t.pop_back();
            sum-=n;
            while(i<nums.size()-1 && nums[i]==nums[i+1]){i++;}
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> v;
        vector<vector<int>> ans;
        int sum=0;

        findcombo(0,candidates,target,ans,v,sum);
        return ans;
    }
};