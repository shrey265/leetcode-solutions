class Solution {
    int perimeter(vector<vector<int>>& grid, int i, int j){
        int row = grid.size(), col = grid[0].size();
        if(i<0 || j<0 || i>=row || j>=col)
            return 1;
        else if(grid[i][j]==0)
            return 1;
        else if(grid[i][j]==2)
            return 0;
        grid[i][j]=2;
        return perimeter(grid,i+1,j)+perimeter(grid,i-1,j)+perimeter(grid,i,j-1)+perimeter(grid,i,j+1);
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size(), result=0;
        for(int i=0;i<row;i++){
            int flag=0;
            for(int j=0;j<col;j++){
                if(grid[i][j]){
                    flag=1;
                    result=perimeter(grid,i,j);
                    break;
                }
            }
            if(flag==1)
                break;
        }
        return result;
    }
};