class Solution {
public:
    int dfs(int i, int j,vector<vector<bool>>& vis,vector<vector<int>>& grid, int n, int m){
        if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != 1 || vis[i][j]) return 0;
        

        vis[i][j] = true;


        int top = dfs(i-1,j,vis,grid,n,m);
        int bottom = dfs(i+1,j,vis,grid,n,m);
        int left = dfs(i,j-1,vis,grid,n,m);
        int right = dfs(i,j+1,vis,grid,n,m);
        return top + bottom + left + right + 1;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int max_area = 0;
        int curr = 0;
        vector<vector<bool>> vis(n, vector<bool>(m,false));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && !vis[i][j]){
                    curr = dfs(i , j, vis, grid, n , m);
                    max_area = max(max_area, curr);
                    curr = 0;
                }
            }
        }
        return max_area;

    }
};
