class Solution {
public:
    void maxgold_path(vector<vector<int>> &nums,int &ans,int temp,int i,int j){
        int t=nums[i][j]; temp=temp+t;nums[i][j]=0;
        if(temp>ans){ans=temp;}
        if(i-1>=0 && nums[i-1][j]!=0){maxgold_path(nums,ans,temp,i-1,j);}
        if(i+1<nums.size() && nums[i+1][j]!=0){maxgold_path(nums,ans,temp,i+1,j);}
        if(j-1>=0 && nums[i][j-1]!=0){maxgold_path(nums,ans,temp,i,j-1);}
        if(j+1<nums[0].size() && nums[i][j+1]!=0){maxgold_path(nums,ans,temp,i,j+1);}
        nums[i][j]=t;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans=0;int temp=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]!=0){
                maxgold_path(grid,ans,temp,i,j);}
            }
        }
        return ans;
    }
};