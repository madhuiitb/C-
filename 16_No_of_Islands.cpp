class Solution {
public:
    void check_is_island(vector<vector<char>>& grid, int i, int j, int row, int col){
        if(i<0 || j<0 || i==row || j==col){
            return;
        }
        if(grid[i][j]=='0' || grid[i][j]=='2'){
            return;
        }
        grid[i][j]='2';
        check_is_island(grid, i+1,j,row,col); //moving_right
        check_is_island(grid, i-1,j,row,col); //moving_left
        check_is_island(grid, i,j+1,row,col); //moving_up
        check_is_island(grid, i,j-1,row,col); //moving_down    
    }
    int numIslands(vector<vector<char>>& grid) {
        int islands=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    check_is_island(grid, i, j, n, m);
                    islands++;
                }
            }
        }
        return islands;
        
    }
};
