class Solution {
public:
    void generate_combinations(vector<int> &t , vector<int> nums,vector<vector<int>> &ans,int &k){
        if(t.size()==k){ans.push_back(t);return ;}
        if(t.size()>k){return;}
        if(nums.size()==0){return;}
        t.push_back(nums[0]);
        vector<int> temp(nums.begin()+1,nums.end());
        generate_combinations(t,temp,ans,k);
        t.pop_back();
        generate_combinations(t,temp,ans,k);

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>  nums;
        vector<int> t;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            nums.push_back(i+1);
        }
        generate_combinations(t,nums,ans,k);
        return ans;
    }
};