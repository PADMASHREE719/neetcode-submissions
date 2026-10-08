class Solution {
public:

    void dfs(vector<vector<char>>& board,int n,int m,int i,int j,vector<vector<bool>>& vis){
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || board[i][j]=='X'){
            return;
        }
        vis[i][j]=true;
        dfs(board,n,m,i-1,j,vis);
        dfs(board,n,m,i,j+1,vis);
        dfs(board,n,m,i+1,j,vis);
        dfs(board,n,m,i,j-1,vis);

    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();

        vector<vector<bool>> vis(n,vector<bool>(m,false));

        //traverse first and last row
        for(int j=0;j<m;j++){//first row
            if(!vis[0][j] && board[0][j]=='O'){
                dfs(board,n,m,0,j,vis);
            }
            if(!vis[n-1][j] && board[n-1][j]=='O'){//last row
                dfs(board,n,m,n-1,j,vis);
            }
        }

        //traverse first and last column
        for(int i=0;i<n;i++){
            if(!vis[i][0] && board[i][0]=='O'){//first col
                dfs(board,n,m,i,0,vis);
            }
            if(!vis[i][m-1] && board[i][m-1]=='O'){//last col
                dfs(board,n,m,i,m-1,vis);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
        
    }
};
