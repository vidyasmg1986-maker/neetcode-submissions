class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vis){
        int m = grid.size();
        int n = grid[0].size();

        if(i<0 || j<0 || i>=m || j>=n) return 0;
        if(grid[i][j]==0 || vis[i][j]==1) return 0;

        int ans=1;
        vis[i][j]=1;
        ans+=dfs(i,j+1,grid,vis);
        ans+=dfs(i,j-1,grid,vis);
        ans+=dfs(i+1,j,grid,vis);
        ans+=dfs(i-1,j,grid,vis);

        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans=0;
        vector<vector<int>> vis(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    int res = dfs(i,j,grid,vis);
                    ans = max(ans,res);
                }
            }
        }
        return ans;
    }
};
