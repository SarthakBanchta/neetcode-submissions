class Solution {
public:
    int dfs(int i, int j,vector<vector<int>>& grid, int n, int m){
        if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != 1) return 0;
        

        grid[i][j] = 0;


        int top = dfs(i-1,j,grid,n,m);
        int bottom = dfs(i+1,j,grid,n,m);
        int left = dfs(i,j-1,grid,n,m);
        int right = dfs(i,j+1,grid,n,m);
        return top + bottom + left + right + 1;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int max_area = 0;
        int curr = 0;
    

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 ){
                    curr = dfs(i , j, grid, n , m);
                    max_area = max(max_area, curr);
                    curr = 0;
                }
            }
        }
        return max_area;

    }
};
