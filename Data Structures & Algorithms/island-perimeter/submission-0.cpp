class Solution {
public:
    void cont_peri(int i,vector<vector<int>>& grid,int& perimeter){
        if(i == grid.size()){
            return ;
        }

        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j] == 1){
                perimeter += 4;
                if(j>0 && grid[i][j-1]==1){
                    perimeter -= 2;
                }
                if(i>0 && grid[i-1][j]==1){
                    perimeter -= 2;
                }
            }
        }
        cont_peri(i+1,grid,perimeter);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter=0;
        cont_peri(0,grid,perimeter);
        return perimeter;
    }
};