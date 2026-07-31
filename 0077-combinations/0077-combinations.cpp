class Solution {
public:
    void gen_combo(vector<int> &t , vector<int> nums,int idx,vector<vector<int>> &ans, int &k){
        if(t.size()==k){ans.push_back(t);return;}
        if(t.size()>k){return ;}
        for(int i=idx;i<nums.size();i++){
            t.push_back(nums[i]);
            gen_combo(t,nums,i+1,ans,k);
            t.pop_back();

        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>  nums;
        vector<vector<int>> ans;
        vector<int> t;
        int idx=0;
        for(int i=0;i<n;i++){
            nums.push_back(i+1);
        }
        gen_combo(t,nums,idx,ans,k);
        return ans;
        
    }
};