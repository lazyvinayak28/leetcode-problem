class Solution {
public:
    vector<vector<int>> check(vector<int>t,vector<int> nums,vector<vector<int>> &v){
        if(nums.size()==0){v.push_back(t);return v;}
        int x=nums[0];
        vector<int> temp(nums.begin()+1,nums.end());  
        vector<int>t2=t;
        t2.push_back(x);
        check(t2,temp,v);
        int idx = 0;
        while (idx < nums.size() && nums[idx] == x) {
            idx++;
        }
        vector<int> temp2(nums.begin() + idx, nums.end());
        check(t, temp2, v);
        return v;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        vector<int>t(0);
        return check(t,nums,v);
    }
}; 