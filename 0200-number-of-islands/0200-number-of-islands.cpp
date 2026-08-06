class Solution {
public:
    void find_max_area(vector<vector<char>>& grid,int i,int j){
        grid[i][j]='0';
        if(i-1>=0 && grid[i-1][j]=='1'){find_max_area(grid,i-1,j);}
        //down
        if(i+1<grid.size() && grid[i+1][j]=='1'){find_max_area(grid,i+1,j);}
        //right
        if(j+1<grid[0].size() && grid[i][j+1]=='1'){find_max_area(grid,i,j+1);}
        //left
        if(j-1>=0 && grid[i][j-1]=='1'){find_max_area(grid,i,j-1);}
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){count++;find_max_area(grid,i,j);}
            }
        }
        return count;
    }
};