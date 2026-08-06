class Solution {
public:
    void find_max_area(vector<vector<int>>& grid,int i,int j,int &maxarea,int &currarea){
        currarea+=1;
        grid[i][j]=0;
        // if(grid[i][j])
        //up
        if(i-1>=0 && grid[i-1][j]==1){find_max_area(grid,i-1,j,maxarea,currarea);}
        //down
        if(i+1<grid.size() && grid[i+1][j]==1){find_max_area(grid,i+1,j,maxarea,currarea);}
        //right
        if(j+1<grid[0].size() && grid[i][j+1]==1){find_max_area(grid,i,j+1,maxarea,currarea);}
        //left
        if(j-1>=0 && grid[i][j-1]==1){find_max_area(grid,i,j-1,maxarea,currarea);}
        if(currarea>=maxarea){maxarea=currarea;}
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxarea=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                int currarea=0;
                if(grid[i][j]==1){find_max_area(grid,i,j,maxarea,currarea);}
            }
        }
        return maxarea;
    }
};