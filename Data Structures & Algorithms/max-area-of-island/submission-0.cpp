class Solution {
public:
    int m, n;
    vector<vector<int>> grid;
    vector<vector<int>> directions = {{0,1},{1,0},{-1,0},{0,-1}};
    vector<vector<bool>> seen;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        this->grid = grid;
        m = grid.size();
        n = grid[0].size();
        seen = vector(m, vector<bool>(n,false));
        int maxArea = 0;
        for(int row = 0; row<m; ++row){
            for(int col = 0; col<n; ++col){
                if(grid[row][col] == 1 && !seen[row][col]){
                    int ans = dfs(row, col);
                    maxArea = max(maxArea, ans);
                }
            }
        }
        return maxArea;
        
    }
    int dfs(int row, int col){
        if(row<0 || row>=m || col<0 || col>=n) return 0;
        if(grid[row][col] == 0 || seen[row][col]) return 0;
        seen[row][col] = true;
        int ans = 1;
        for(vector<int> dir : directions){
            int nextRow = row+dir[0], nextCol = col + dir[1];
            ans+=dfs(nextRow, nextCol);
        }
        return ans;
    }
};
