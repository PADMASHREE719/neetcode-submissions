class Solution {
public:

    int dfs(vector<vector<int>>& grid,int n,int m,int i,int j,vector<vector<bool>> & vis){

        if(i<0 || i>=n || j<0 || j>=m || vis[i][j] || grid[i][j]==0){
            return 0;
        }
        vis[i][j]=true;
        int ans=1;
        ans+=dfs(grid,n,m,i-1,j,vis);
        ans+=dfs(grid,n,m,i,j+1,vis);
        ans+=dfs(grid,n,m,i+1,j,vis);
        ans+=dfs(grid,n,m,i,j-1,vis);
        
        return ans;
    } 

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int maxArea=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    int area = dfs(grid,n,m,i,j,vis);
                    maxArea=max(maxArea,area);
                }
            }
        }
        return maxArea;
    }
};
