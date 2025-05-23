class Solution {
  public:
    void rec(vector<vector<int>>& adj,vector<bool>& visited,int s,vector<int>& res){
        visited[s]=1;
        res.push_back(s);
        for(int j=0;j<adj[s].size();j++){
            int i=adj[s][j];
            if(!visited[i]){
                rec(adj,visited,i,res);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<bool> visited(adj.size(),0);
        vector<int>res;
        rec(adj,visited,0,res);
        return res;
    }
};