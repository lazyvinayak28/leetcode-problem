class Solution {
public:
void check(vector<int> t,vector<int> nums,vector<vector<int>> &v){
    if(nums.size()==0){v.push_back(t);return;}   
    for(int i=0;i<nums.size();i++){
        t.push_back(nums[i]);
        vector<int> temp=nums;
        temp.erase(temp.begin()+i);
        check(t,temp,v);
        t.pop_back();
    }

}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> t;
        vector<vector<int>> v;
        check(t,nums,v);
        return v;
    }
};