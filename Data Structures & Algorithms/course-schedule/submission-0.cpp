/* if there is a cycle then there is no oder.. this is topological sorting problem as dependencies exits.. if the graph doesnot conatin cycle then it contain atleat one scheduling option.. so basically we need to check if cycle exists or not*/
class Solution {
public:

    bool isCycleDFS(int src,vector<bool> &vis,vector<bool> &resPath,vector<vector<int>> &edges){
        vis[src]=true;
        resPath[src]=true;

        for(int i=0;i<edges.size();i++){
            int v=edges[i][0];
            int u=edges[i][1];

            if(src==u){
                if(!vis[v]){
                    if(isCycleDFS(v,vis,resPath,edges)){
                        return true;
                    }
                }
                else if(resPath[v]){
                    return true;
                }
            }

        }
        resPath[src]=false;
        return false;

    }

    bool canFinish(int n, vector<vector<int>>& edges) {
        vector<bool> vis(n,false);
        vector<bool> resPath(n,false);

        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(isCycleDFS(i,vis,resPath,edges)){
                    return false;
                }
            }
        }
        return true;
        
    }
};
