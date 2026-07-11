class Solution {
public:
    vector<vector<int>> check(vector<int>t,vector<int> nums,vector<vector<int>> &v){
        if(nums.size()==0){v.push_back(t);return v;}
        int x=nums[0];
        vector<int> temp(nums.begin()+1,nums.end());  
        vector<int>t2=t;
        t2.push_back(x);
        check(t,temp,v);check(t2,temp,v);
        return v;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>t(0);
        return check(t,nums,v);
    }
};