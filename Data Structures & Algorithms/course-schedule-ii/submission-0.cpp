class Solution {
public:

    bool isCycleDFS(int src,vector<bool> &vis,vector<bool>& recPath,vector<vector<int>>& edges){
        vis[src]=true;
        recPath[src]=true;

        for(int i=0;i<edges.size();i++){
            int v=edges[i][0];
            int u=edges[i][1];

            if(u==src){
                if(!vis[v]){
                    if(isCycleDFS(v,vis,recPath,edges)){
                        return true;
                    }
                }
                else if(vis[v] && recPath[v]){
                    return true;
                }
            }
        }
        recPath[src]=false;
        return false;
    }

    void TopoOrder(int src,vector<bool> &vis,vector<vector<int>> &edges,stack<int> &st){
        vis[src]=true;
        for(int i=0;i<edges.size();i++){
            int v=edges[i][0];
            int u=edges[i][1];

            if(u==src){
                if(!vis[v]){
                    TopoOrder(v,vis,edges,st);
                }
            }
        }
        st.push(src);

    }

    vector<int> findOrder(int n, vector<vector<int>>& edges) {
        vector<bool> vis(n,false);
        vector<bool> recPath(n,false);
        vector<int> ans;

        for(int i=0;i<edges.size();i++){
            if(!vis[i]){
                if(isCycleDFS(i,vis,recPath,edges)){
                    return ans;
                }
            }
        }

        stack<int> st;
        vis.assign(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                TopoOrder(i,vis,edges,st);
            }
        }

        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
        
    }
};
